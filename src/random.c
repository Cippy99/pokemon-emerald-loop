#include "global.h"
#include "random.h"
#if MODERN
#include <alloca.h>
#endif

EWRAM_DATA static u8 sUnknown = 0;
EWRAM_DATA static u32 sRandCount = 0;

// IWRAM common
u32 gRngValue;
u32 gRng2Value;
u32 gRngCustomValue;

u16 Random(void)
{
    gRngValue = ISO_RANDOMIZE1(gRngValue);
    sRandCount++;
    return gRngValue >> 16;
}

void SeedRng(u16 seed)
{
    gRngValue = seed;
    sUnknown = 0;
}

void SeedRng2(u16 seed)
{
    gRng2Value = seed;
}

void SeedRngCustom(u16 seed)
{
    gRngCustomValue = seed;
}


u16 Random2(void)
{
    gRng2Value = ISO_RANDOMIZE1(gRng2Value);
    return gRng2Value >> 16;
}

u16 RandomCustom(void)
{
    gRngCustomValue = 1103515245 * gRngCustomValue + 24691;
    // DebugPrintf("Random: %d", gRngCustomValue >> 16);
    return gRngCustomValue >> 16;
}

/*
Inputs:
  list: array of u16 values
  count: size of the array (or number of elements to shuffle)
*/
void ShuffleList(u16 *list, u16 count)
{
    u16 i;

    for (i = (count - 1); i > 0; i--)
    {
        u16 j = RandomCustom() % (i + 1);
        u16 arr = list[j];
        list[j] = list[i];
        list[i] = arr;
    }
}

#define SHUFFLE_IMPL \
    u32 tmp; \
    --n; \
    while (n > 1) \
    { \
        int j = (Random() * (n+1)) >> 16; \
        SWAP(data[n], data[j], tmp); \
        --n; \
    }

void Shuffle8(void *data_, size_t n)
{
    u8 *data = data_;
    SHUFFLE_IMPL;
}

void Shuffle16(void *data_, size_t n)
{
    u16 *data = data_;
    SHUFFLE_IMPL;
}

void Shuffle32(void *data_, size_t n)
{
    u32 *data = data_;
    SHUFFLE_IMPL;
}

void ShuffleN(void *data, size_t n, size_t size)
{
    void *tmp = alloca(size);
    --n;
    while (n > 1)
    {
        int j = (Random() * (n+1)) >> 16;
        memcpy(tmp, (u8 *)data + n*size, size); // tmp = data[n];
        memcpy((u8 *)data + n*size, (u8 *)data + j*size, size); // data[n] = data[j];
        memcpy((u8 *)data + j*size, tmp, size); // data[j] = tmp;
        --n;
    }
}

__attribute__((weak, alias("RandomUniformDefault")))
u32 RandomUniform(enum RandomTag tag, u32 lo, u32 hi);

__attribute__((weak, alias("RandomUniformExceptDefault")))
u32 RandomUniformExcept(enum RandomTag, u32 lo, u32 hi, bool32 (*reject)(u32));

__attribute__((weak, alias("RandomWeightedArrayDefault")))
u32 RandomWeightedArray(enum RandomTag tag, u32 sum, u32 n, const u8 *weights);

__attribute__((weak, alias("RandomElementArrayDefault")))
const void *RandomElementArray(enum RandomTag tag, const void *array, size_t size, size_t count);

u32 RandomUniformDefault(enum RandomTag tag, u32 lo, u32 hi)
{
    return lo + (((hi - lo + 1) * Random()) >> 16);
}

u32 RandomUniformExceptDefault(enum RandomTag tag, u32 lo, u32 hi, bool32 (*reject)(u32))
{
    while (TRUE)
    {
        u32 n = RandomUniformDefault(tag, lo, hi);
        if (!reject(n))
            return n;
    }
}

u32 RandomWeightedArrayDefault(enum RandomTag tag, u32 sum, u32 n, const u8 *weights)
{
    s32 i, targetSum;
    targetSum = (sum * Random()) >> 16;
    for (i = 0; i < n - 1; i++)
    {
        targetSum -= weights[i];
        if (targetSum < 0)
            return i;
    }
    return n - 1;
}

const void *RandomElementArrayDefault(enum RandomTag tag, const void *array, size_t size, size_t count)
{
    return (const u8 *)array + size * RandomUniformDefault(tag, 0, count - 1);
}