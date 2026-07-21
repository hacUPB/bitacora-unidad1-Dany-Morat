@5
D=A
@10
D=D+A
@20
M=D

0;JMP


////////////////////


VAR=15
@15
D=A
@VAR
M=D


i=10
@10
D=A
@i
M=D

@i
D=M
@VAR
D=D-M


@20
D;JGT
@30
0;JMP


@1000
D=A
@i
M=D
(LOOP)
@i
D=M
@CONT
D;JEQ
@i
M=M-1
@LOOP
0;JMP 