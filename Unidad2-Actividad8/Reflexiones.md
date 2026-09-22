1. ¿Qué ocurre después de llamar a la función `cambiarNombre`? ¿Por qué aparece el mensaje `Destructor: Punto cambiado(70, 80) destruido.`?
 Original se pasa por valor y se crea una copia de p, cuando se acaba cambiarNombre el valor de p deja de exitir por lo que se activida el destructor solo de p no del objeto original
2. ¿Por qué `original` sigue existiendo luego de llamar `cambiarNombre`?
 Porque original y p son objetos distintos p es la copia de original, original fue creado en el main mientras que p fue creado solo para la funcion cambiarNombre cuando se termina esa funcion p deja de existir  
3. ¿En qué parte del mapa de memoria se encuentra `original` y en qué parte se encuentra `p`? ¿Son el mismo objeto? (recuerda usar siempre el depurador para responder estas preguntas).
 No no son el mismo objeto pero ambos estan guardados en el stack

Modifica la función `cambiarNombre`:

`void cambiarNombre(Punto& p, string nuevoNombre) {  p.name = nuevoNombre;}`

1. ¿Qué ocurre ahora? ¿Por qué?
 Ahora p es una referencia del original por lo que p funciona como otro nombre para el mismo objeto


Modifica ahora a `cambiarNombre` y a `main` de la siguiente manera:

```cpp
void cambiarNombre(Punto* p, string nuevoNombre) {
		p->name = nuevoNombre;
		}
int main() {    // Objeto original
		Punto original("original",70, 80);
		original.imprimir();
    cambiarNombre(&original, "cambiado");
    original.imprimir();
    return 0;
    }
```

1. ¿Qué ocurre ahora? ¿Por qué?
 Aqui p  tiene la direccion de original, por lo q si se modifica tambien modifica al original
2. En este caso ¿Cuál es la diferencia entre pasar un objeto por valor, por referencia y por puntero?
 Por valor  se crea una copia p que no afecta al original y se destruye al terminar la funcion, por referencia no se copia el objeto y se modifica directamente el original y por puntero tambien pero se modifica taraves de su direccion