@1
D=A
@2
D=D+A
@16
M=D
(END)
@END
0;JMP



![alt text](<../Imagenes siscom/Captura de pantalla 2026-08-08 212247.png>)

¿Qué sucede?
 El programa toma el valor 1, le suma el valor 2 y guarda el resultado en la dirección de memoria 16

¿Qué valor se almacena en la dirección de memoria 16?
 Toma el valor de 3 

¿Por qué crees que es ese valor?
 Porque el programa usa una suma y el resultado queda almacenado temporalmente en el registro D y luego se copia desde D hacia la dirección de memoria 16 mediante M=D
 
¿Qué cambios observas en el contenido de la memoria y los registros? 
 Los principales cambios son que el registro A primero toma 1, después toma el 2 y al final toma el 16

 En el registro D al principio no tiene ningun resultado luego con D=A, pasa a valer 1, despues con D=D+A, pasa a valer 3, luego se queda en 3

 Y ya para la memoria 16, al inicio aparece con valor 0 y después de ejecutar M=D, cambia a 3

