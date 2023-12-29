@ Returns the type of the Important Fight given it's var
.macro getimportantfighttype var:req
.byte 0xe3
.4byte \var
.endm

@ Returns the set of the Important Fight given it's var
.macro getimportantfightset var:req
.byte 0xe4
.4byte \var
.endm

@ Buffers the specified leader's name to the given string var.
@ If the trainer id is >= TRAINERS_COUNT it will be treated as TRAINER_NONE.
.macro bufferleadername stringVarId:req, importantFightVar:req
.byte 0xe8
stringvar \stringVarId
.2byte \importantFightVar
.endm
