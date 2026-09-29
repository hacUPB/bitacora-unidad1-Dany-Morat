1. Explica con tus propias palabras el propósito del patrón Observer. ¿Qué problema resuelve?
 El Observer evita que un objeto tenga que estar “preguntando” todo el tiempo si algo cambio, en camio el Subject avisa sobre algun evento ademas de esto evita que los objetos estén conectados entre si y permite que muchos objetos reaccionen a un evento sin que el Subject tenga que conocerlos uno por uno lo que hace que el código sea más facil de extender

2. Dibuja un diagrama que muestre la relación entre `Subject`, `Observer`, `ofApp` y `Particle` en el caso de estudio, indicando quién es el Sujeto y quiénes los Observadores.

 ![alt text](<../Imagenes siscom/DIAGRAMA ACTIVIDAD 9.jpeg>)

 Explicacion: ofApp es el Subject el que envia las notificaciones cuando presionas teclas, Particle recibe las notificaciones y cambia su estado, el Observer define el metodo onNotify, que las particulas implementan

3. Construye un diagrama de secuencia que muestre cómo funciona el patrón Observer al presionar una tecla.
 ![alt text](<../Imagenes siscom/Diagrama de secuencia.jpeg>)

4. ¿Qué ventajas crees que ofrece usar el patrón Observer en esta aplicación en comparación con, por ejemplo, que `ofApp::update` recorriera todas las partículas y les dijera directamente que cambien su comportamiento basado en una variable global? Piensa en términos de acoplamiento y extensibilidad.
 Ventajas de usar el Observer en esta aplicacion esque hay menos acoplamiento, si ofApp tuviera que recorrer todas las partículas y cambiarles el comportamiento directamente, estaría muy conectado a ellas mientras que con el Observer, ofApp solo envia un mensaje, no necesita saber cuantas particulas hay en total ni que tipo son ni como cambian su estado, esto hace el codigo mas limpio y fácil de mantener