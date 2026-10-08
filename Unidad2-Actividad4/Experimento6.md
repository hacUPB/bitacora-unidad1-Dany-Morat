#include <iostream>
using namespace std;
int main() {    // Tamaño del arreglo dinámico
		int tam = 5;
    // Asignar memoria en el Heap para un arreglo de enteros
    int* arrayHeap = new int[tam];
    // Inicializar y mostrar los valores y direcciones de memoria
    for (int i = 0; i < tam; i++) {
		    arrayHeap[i] = (i + 1) * 10;
		    cout << "arrayHeap[" << i << "] = " << arrayHeap[i] << " en dirección " << (arrayHeap + i) << endl;
		    }
    // Liberar la memoria asignada en el Heap
    delete[] arrayHeap;
    /**********************************************************
    EXPERIMENTO 6
    ***********************************************************/
    cout << arrayHeap[0] << endl;

    /********************************************************/
    return 0;
    }

- Comenta la línea de genera el error y analiza las siguientes preguntas: // cout << arrayHeap[0] << endl;
    - ¿Qué diferencias notas entre el comportamiento y la gestión del `Heap` en comparación con el `Stack`?
     El  stack crea variables locales y no se eliminan manualmente se eliminan cuando se sale de la funcion mientraws que el heap se usa con un new y se debe liberar con un delete
    - ¿Qué consecuencias tendría no liberar la memoria reservada con `new`?
     Si se reserva con un new esa memoria queda ocupada durante todo el programa y si es por mucho tiempo empieza a tener fallas en el rendimiento del programa
    - ¿Por qué es importante usar `delete[]` al liberar memoria asignada para un arreglo?
     porque delete está destinado a memoria reservada para un solo objeto mediante new, mientras que delete[] corresponde a memoria reservada mediante new[] 