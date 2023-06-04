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
