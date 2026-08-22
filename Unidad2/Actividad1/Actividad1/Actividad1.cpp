// Actividad1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

/**#include <iostream>
using namespace std;

// Función que modifica el parámetro pasado por valor
void modificarPorValor(int n) {
    cout << "Dentro de modificarPorValor, valor inicial: " << n << endl;
    n += 5;
    cout << "Dentro de modificarPorValor, valor modificado: " << n << endl;
}

// Función que modifica el parámetro pasado por referencia
void modificarPorReferencia(int& n) {
    cout << "Dentro de modificarPorReferencia, valor inicial: " << n << endl;
    n += 5;
    cout << "Dentro de modificarPorReferencia, valor modificado: " << n << endl;
}

// Función que modifica el parámetro utilizando punteros
void modificarPorPuntero(int* n) {
    cout << "Dentro de modificarPorPuntero, valor inicial: " << *n << endl;
    *n += 5;
    cout << "Dentro de modificarPorPuntero, valor modificado: " << *n << endl;
}

int main() {
    int a = 10;    int b = 10;    int c = 10;
    cout << "Valor inicial de a (paso por valor): " << a << endl;
    //aqui pone el valor de 10
    cout << "Valor inicial de b (paso por referencia): " << b << endl;
    //aqui pone el valor de 10
    cout << "Valor inicial de c (paso por puntero): " << c << endl;
    //aqui pone el valor de 10
    cout << "\nLlamando a modificarPorValor(a)..." << endl;
    modificarPorValor(a);
    //el modificarPorValor toma el valor n en este caso a y lo suma con 5
    cout << "Después de modificarPorValor, valor de a: " << a << endl;
    //tira 15
    cout << "\nLlamando a modificarPorReferencia(b)..." << endl;
    modificarPorReferencia(b);
    //lo mismo que con a el modifircarPorReferencia toma el valor de b y lo suma con 5 dejando asi el 15
    cout << "Después de modificarPorReferencia, valor de b: " << b << endl;
    cout << "\nLlamando a modificarPorPuntero(&c)..." << endl;
    modificarPorPuntero(&c);
    cout << "Después de modificarPorPuntero, valor de c: " << c << endl;
    return 0;
}**/

#include <iostream>
using namespace std; 
int main() {

    int a = 10, b = 20;
    cout << "antes de swapPorValor: a = " << a << ", b = " << b << endl;
    swapPorValor(a, b);
    cout << "despues de swapPorValor: a = " << a << ", b = " << b << endl;

    cout << endl;

    int c = 30, d = 40;
    cout << "antes de swapPorReferencia: c = " << c << ", d = " << d << endl;
    swapPorReferencia(c, d);
    cout << "despues de swapPorReferencia: c = " << c << ", d = " << d << endl;

    cout << endl;

    int e = 50, f = 60;
    cout << "antes de swapPorPuntero: e = " << e << ", f = " << f << endl;
    swapPorPuntero(&e, &f);
    cout << "despues de swapPorPuntero: e = " << e << ", f = " << f << endl;

    return 0;
  



}

void swapPorValor(int a, int b) 
{

    int temp = a;
    a = b;
    temp = b; 
}

void swapPorReferencia(int &a,    int &b) 
{
    int temp = a;
    a = b;
    temp = b;

}

void swapPorPuntero(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

}





// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
