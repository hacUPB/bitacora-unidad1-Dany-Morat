@SCREEN
D=A
@i
M=D

Se guarda en i la dirrecion inicial de la pantalla 

(READKEYBOARD)
@KBD
D=M
@KEYPRESSED
D;JNE

Aqui se revisa el teclado si no se presiona ninguna tecla sigue

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

Creo que ira borrando la pantalla progresivamete poniendo 0 en las posiciones de la memoria, i ira disminuyendo y cada posicion visitada se pondra como M=0

@READKEYBOARD
0;JMP

En cambio si si se preciona alguna tecla

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

aqui coloca M=-1 en la posicion actual de la pantalla y luego aumenta a i, creo q esa posicion hace que la pantalla se ilumine completamente

@READKEYBOARD
0;JMP

al final si se presiona una tecla los mas probable esque comenzara a aparecer una zona negra negra que se va extendiendo por la pantalla y al soltarse la tecla se borrara