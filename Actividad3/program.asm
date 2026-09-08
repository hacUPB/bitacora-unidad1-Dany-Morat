@SCREEN //A=16384
D=A
@i
M=D //i=16384

//este codigo hace que A apunte a la posicion 16384, depues el registro en A se almacena en D luego declara una variable en @i y ya por ultimo el valor almacenado en D se almacena en @i

(READKEYBOARD)
@KBD
D=M
@KEYPRESSED
D;JNE
@i
D=M
@SCREEN
D=D-A
@READKEYBOARD
D;JLE
@i
M=M-1
A=M
M=0
@READKEYBOARD
0;JMP

(KEYPRESSED)
@i
D=M
@KBD
D=D-A
@READKEYBOARD
D;JGE
@i
A=M
M=-1
@i
M=M+1
@READKEYBOARD
0;JMP

