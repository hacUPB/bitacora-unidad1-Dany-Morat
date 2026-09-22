#include <iostream>
#include <cstdlib>
using namespace std;
// Función de ejemplo que muestra la dirección de su variable local estática
void funcionConStatic() {
		static int var_estatica = 100;
		cout << "Dirección de var_estatica (static): " << &var_estatica << endl;
}

int main() {    // Variable local (stack)
		int a = 10;
		int b = 20;
    /**********************************************************
    EXPERIMENTO 4
    ***********************************************************/
    var_estatica = 42;
    cout << "var_estatica: " << var_estatica << endl;
    /********************************************************/
    return 0;
    }

- ¿Qué ocurre? ¿Por qué?
   Aunque var_estatica existe durante toda la ejecución del programa, su nombre solamente es visible dentro de funcionConStatic() esto significa que main() no puede acceder directamente a var_estatica  

- ¿Qué pasa con las variables cada que entras y sales de la función?
 Las variables estaticas se guardan en el stack cada que cadda vez que entran a una fucion y cuando salen dejan de exitir

- En relación a la pregunta anterior ¿Qué pasa con las variables locales estáticas?
 Las variables locales se guadan dentro de la funcion y dentro de todo el codigo por lo tanto cuando salen de su funcion siguen teniendo su mismo valor

 
 