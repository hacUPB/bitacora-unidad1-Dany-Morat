

@5
D=M

@10
D=D-A

@MENOR
D;JLT

@7
M=0

@END
0;JMP 

La pantalla del computador Hack se controla a través de un mapa de memoria que comienza en la dirección 16384 (SCREEN). Cada bit en este mapa de memoria representa un pixel en la pantalla (1 = negro, 0 = blanco). Escribe un programa que dibuje un punto negro en la esquina superior izquierda de la pantalla. (Recuerda que la esquina superior izquierda corresponde al primer bit del primer word en la dirección SCREEN).

Traduce este programa a lenguaje C++ para que relaciones cómo los conceptos de alto nivel se traducen a bajo nivel.

@SCREEN
D=A
D=-D
D=D+D
@SCREEN
M=D

(END)
@END
0;JMP

int SCREEN = 16384;

int RAM[24577];

RAM[SCREEN] = -32768;