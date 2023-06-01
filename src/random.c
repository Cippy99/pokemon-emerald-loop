#include "global.h"
#include "random.h"

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
    gRngCustomValue = ISO_RANDOMIZE1(gRngCustomValue);
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
        u16 j = Random() % (i + 1);
        u16 arr = list[j];
        list[j] = list[i];
        list[i] = arr;
    }
}
