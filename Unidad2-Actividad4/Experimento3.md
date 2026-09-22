#include <iostream>
#include <cstdlib>
using namespace std;
// Variables globales
int global_inicializada = 42;
int global_no_inicializada;

int main() {    // Variable local (stack)
		int a = 10;
		int b = 20;

    /**********************************************************
    EXPERIMENTO 3
    ***********************************************************/
    cout << "global_inicializada: " << global_inicializada << endl;
    cout << "global_no_inicializada: " << global_no_inicializada << endl;

    global_inicializada = 69;
    global_no_inicializada = 666;
    cout << "global_inicializada: " << global_inicializada << endl;
    cout << "global_no_inicializada: " << global_no_inicializada << endl;
    /********************************************************/
    return 0;
    }

¿Qué ocurre? ¿Por qué?
 Ambas variables pueden modificarse porque son globales, pero no son constante, la diferencia es que una comienza con un valor definido por el programador (42) y la otra es inicializada automáticamente en 0