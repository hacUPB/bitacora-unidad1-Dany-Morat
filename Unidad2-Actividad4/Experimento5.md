#include <iostream>
#include <cstdlib>
using namespace std;
// Función de ejemplo que muestra la dirección de su variable local estática
void funcionConStatic() {
		static int var_estatica = 100;
		cout << "var_estatica: " << var_estatica << endl;
		var_estatica++;
}

void funcionSinStatic() {
		int var_no_estatica = 100;
		cout << "var_no_estatica: " << var_no_estatica << endl;
		var_no_estatica++;
}

int main() {    // Variable local (stack)
		int a = 10;
		int b = 20;
    /**********************************************************
    EXPERIMENTO 5
    ***********************************************************/
    for (int i = 0; i < 5; i++) {
		    cout << "Iteración " << i << endl;
		    funcionSinStatic();
		    funcionConStatic();
		}
    /********************************************************/
    return 0;
    }

- ¿Qué ocurre? ¿Por qué?
 El programa se ejecuta 5 veces y cada vez las variables se suman uno empezando por el 100 

- Ves alguna diferencia entre las variables locales estáticas y no estáticas?
 Las variables no estaticas se crean al salir de la funcion y dejan de exitir cuando se salen de la funcion y las estaticas se crean y se ejecutan una sola vez pero se quedan para todo el programa
 
- ¿Qué pasa con las variables cada que entras y sales de la función?
 La varibale estatica se cren en funcionSinStatic() y se destruye al salir, mientras que la variable no estatica no se destruye al salir de la funcion
 
