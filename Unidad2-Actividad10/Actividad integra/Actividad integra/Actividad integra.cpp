#include <iostream>
#include <string>

using namespace std;

class Personaje {
public:
    string nombre;

    int vida;
    int ataque;
    int defensa;

    // Constructor
    Personaje(string n, int v, int a, int d)
        : nombre(n), vida(v), ataque(a), defensa(d) {

        cout << "Constructor: nace "
            << nombre << endl;
    }

    // Destructor
    ~Personaje() {
        cout << "Destructor: muere "
            << nombre << endl;
    }

    // Método para mostrar la información
    void imprimir() {
        cout << "Personaje " << nombre
            << " [Vida: " << vida
            << ", ATK: " << ataque
            << ", DEF: " << defensa
            << "]" << endl;
    }
};

void simularEncuentro() {

    cout << "\n--- Iniciando encuentro ---" << endl;

    Personaje heroe("Aragorn", 100, 20, 15);

    Personaje copiaHeroe = heroe;

    copiaHeroe.nombre = "Copia de Aragorn";

    cout << "\nHeroe:" << endl;
    heroe.imprimir();

    cout << "Copia:" << endl;
    copiaHeroe.imprimir();

    cout << "Saliendo del encuentro..." << endl;
}

int main() {

    simularEncuentro();

    cout << "\nSimulación terminada." << endl;

    return 0;
}
