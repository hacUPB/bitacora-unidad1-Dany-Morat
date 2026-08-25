Diagnostico del problema analisis
 No hay ningun destructor que ayude a liberar esta clase estadisticas = new int[3]; y esto prodece una fuga, la consecuencia esque si no se arregla estas fugas se pueden acomular y generar fallas en el juego ademas aumentando el consumo de RAM, otro error esque genera una copia para heroe y aunque son objetos diferentes sus direciones de memoria son iguales, la consecuencia de esto es que al cambiar copiaHeroe.estadisticas tambien se cambia para heroe.estadisticas porque ambos acceden al mismo arreglo, esto es un error porque se espera que la copia tenga datos independientes




Solución y refactorización (síntesis y creación)

esta en la carpeta de Actividad integra

Justificación de la Solución

 Esta es una solucion al problema, primero quite la linea new antes estaba estadisticas = new int[3]; y int* estadisticas; ahora solo esta 
 int vida;
 int ataque;
 int defensa;

 Ahora todo queda en el stack no como antes que  habian cosas en el heap y en el stack aparte ya no se necesita el delete[] y ya no causa fuga de memoria 

 Tambien ahora puse Personaje copiaHeroe = heroe; aqui cada dato se copia con el valor y copiaHeroe.nombre = "Copia de Aragorn"; solo modifica la copia 