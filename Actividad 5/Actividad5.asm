
//Convierte estos programas a ensamblador y realiza la simulación paso a paso. Recuerda la metodología: predice, ejecuta, observa y reflexiona.

int a = 10;
int* p;
p = &a;
*p = 20;

int a = 10;
int b = 5;
int *p;
p = &a;
b = *p;




@10
D=A
@a
M=D

@A
D=A
@p
M=D

@20
D=A
@p
A=M
M=D

////////

@10
D=A 
@a 
M=D
@5
D=a
@b
M=D
@a 
D=A 
@p
M=D
@p
A=M
D=M
@b
M=D

@SCREEN
M=1
