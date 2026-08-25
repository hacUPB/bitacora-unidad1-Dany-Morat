Explica el ciclo de vida de un objeto en el stack versus uno en el heap.
 En el stack: Primero se entra luego se ejecuta el constructor del bloque,luego se crea el objeto y se utiliza y al salirse se ejecuta inmediatamente el destructor
 En el heap: El ojeto se crea con un new y permanece hasta que se ejecute un delete



```cpp
#include <iostream>
using namespace std;
class Punto {
		public:    int x;    int y;
    // Constructor
    Punto(int _x, int _y) : x(_x), y(_y) {
		    cout << "Constructor: Punto(" << x << ", " << y << ") creado." << endl;
		    }
    // Destructor
    ~Punto() {
		    cout << "Destructor: Punto(" << x << ", " << y << ") destruido." << endl;
		    }
    // Método para imprimir valores
    void imprimir() {
		    cout << "Punto(" << x << ", " << y << ")" << endl;
		    }
		};
int main() {
		{
				cout << "Inicio del bloque" << endl;
				Punto pBloque(100, 200);
				pBloque.imprimir();
				// Coloca un breakpoint aquí para ver 'pBloque' en el stack.
		}
		// Al salir del bloque, el destructor de 'pBloque' se invoca.
		cout << "Fuera del bloque" << endl;
		// Creación dinámica:
		Punto* pDinamico = new Punto(300, 400);
		pDinamico->imprimir();
		// 'pDinamico' sigue existiendo hasta que se libere manualmente.
		// Coloca un breakpoint aquí y observa la dirección de memoria.
		delete pDinamico;
		// Después de 'delete', el destructor se llama y la memoria se libera.
	  {
		  cout << "Inicio del bloque 2" << endl;
		  Punto* pBloque2 = new Punto(500, 600);
		  pBloque2->imprimir();
		}
			pBloque2->imprimir();
			delete pBloque2;
	    return 0;
}
```

1. ¿Compila? ¿Por qué ocurre esto?
 No compila porque el pBloque2 se creo bajo los parametros de 500 y 600 fuera de ahi produce un error
2. Modifica el programa para declarar `pBloque2` por fuera del bloque, pero inicializarlo dentro del bloque. ¿Qué ocurre? ¿Por qué?
 Ahora si compila porque ahora pBloque2 fue declarado fuera del bloque lo que hace que tome los valores restantes del main 





```cpp
#include <iostream>
using namespace std;
class Punto {
		public:    int x;    int y;
    // Constructor
    Punto(int _x, int _y) : x(_x), y(_y) {
		    cout << "Constructor: Punto(" << x << ", " << y << ") creado." << endl;
		    }
    // Destructor
    ~Punto() {
		    cout << "Destructor: Punto(" << x << ", " << y << ") destruido." << endl;
		    }
    // Método para imprimir valores
    void imprimir() {
		    cout << "Punto(" << x << ", " << y << ")" << endl;
		    }
		};
int main() {
		{
				cout << "Inicio del bloque" << endl;
				Punto pBloque(100, 200);
				// Coloca un breakpoint aquí para ver 'pBloque' en el stack.
				pBloque.imprimir();
		}
    Punto* pBloque2 = nullptr;
    {
		    cout << "Inicio del bloque 2" << endl;
		    pBloque2 = new Punto(500, 600);
		    pBloque2->imprimir();
		 }
		 pBloque2->imprimir();
		 delete pBloque2;
	   return 0;
}
```

1. ¿Por qué el objeto `pBloque` se destruye al salir del bloque y `pBloque2` no? Recuerda de nuevo, `pBloque2` es un objeto o es una referencia a un objeto?
 Porque pBloque es un objeto de tipo punto y pBloque2 es un puntero
2. ¿En qué parte de la memoria se almacena `pBloque2`?
 Es una varibale declarada en el main() asique esta en el stack
3. ¿En qué parte de la memoria se almacena el objeto al que apunta `pBloque2`?
 Se almacena en el heap porque el punto se incia con un new
 