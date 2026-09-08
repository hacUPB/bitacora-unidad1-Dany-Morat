///////
///Considera el siguiente programa

int arr[] = {33,44,55,12,34,56,78,98,76,54};
int sum = 0;
for (int j = 0; j < 10; j++) {
	sum = sum + arr[j];
	}

///Implementa el programa anterior en lenguaje ensamblador aplicando el concepto de punteros.


@33
D=A
@16
M=D

@44
D=A
@17
M=D

@55
D=A
@18
M=D

@12
D=A
@19
M=D

@34
D=A
@20
M=D

@56
D=A
@21
M=D

@78
D=A
@22
M=D

@98
D=A
@23
M=D

@76
D=A
@24
M=D

@54
D=A
@25
M=D

// sum = 0

@26
M=0

// j = 0

@27
M=0

@16
D=A
@28
M=D

// Inicio ciclo
(LOOP)

@27
D=M
@10
D=D-A
@END
D;JEQ

@28
A=M
D=M

@26
M=M+D

@28
M=M+1

@27
M=M+1

(END)
@END
0;JMP

///Durante el desarrollo del programa fue posible entender cómo el arreglo puede recorrerse mediante el puntero, accediendo a cada elemento a través de su dirección de la memoria