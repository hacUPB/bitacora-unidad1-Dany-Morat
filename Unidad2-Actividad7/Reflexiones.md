1. Explicación de la diferencia entre objetos creados en el stack y en el heap.
 En el stack se crean normalmente en el main() y contiene directamente los atributos que luego se destruyen con un destructor, cuando se crea un objeto en new sus atributos se guardan en el heap y se crea una variable que es un puntero que guarda la dirrecion del objeto 

2. `pStack` ¿Es un objeto o una referencia a un objeto?
 Es un objeto porque tiene directamente sus atributos 
3. `pHeap` ¿Es un objeto o una referencia a un objeto? Si es una referencia, ¿A qué objeto hace referencia?
 Es un puntero por lo tanto hace referencia al objeto
4. Observa en Memory1 (Debug->Windows->Memory->Memory1) el contenido de la dirección de memoria de `pHeap`, recuerda escribir en la entrada de texto de Memory1 la dirección de memoria de `&pHeap` y presionar Enter. Compara el contenido de memoria con el contenido de `pHeap` en la pestaña de Locals (Debug->Windows->Locals). ¿Qué observas? ¿Qué significa esto? 
 La memoria ocupada por pHeap contiene como datos los bytes de una direccion y esa direccion coincide con el valor mostrado para pHeap en Locals y corresponde a la ubicacion del objeto Punto(50, 60) en el Heap, esto demuestra de manera directa que un puntero no es el objeto, es una variable que almacena la dirección del objeto  