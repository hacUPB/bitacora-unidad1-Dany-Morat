1. ¿Cuál es la diferencia entre una CPU y una GPU? 
 Creo que la diferencia es que la CPU hace paso por paso las intrucciones mientras que la GPU hace todas las instrucciones al mismo tiempo

2. ¿Cuáles son los tres pasos claves del pipeline de OpenGL? Explica en tus propias palabras cuál es el objetivo de cada paso.
 Son tres el Vertex Shading toma las formas de los objetos de un plano 3D y usa la vista de la camara para calcular donde encaja cada objeto convirtiendolo en objetos 2D llamada view screen que es la image que se muestra en el display, el Rasterization calcula con la GPU la cantidad de pixeles que caben en los triangulos que se formaron apartir del Vertx Shading y luego se maldean apartir del color o la textura que contiene ese triangulo, ya luego esta el Fragment Shading el cual toma cada uno de los triangulos y los renderiza con su iluminacion, sombra y refeljo correspondiente para que se vea muchisimo mas realista 

3. La gran novedad que introduce OpenGL moderno es el pipeline programable. ¿Qué significa esto? ¿Qué diferencia hay entre el pipeline fijo y el programable? ¿Qué ventajas le ves a esto? y si el pipeline es programable, ¿Qué tengo que programar?
 Creo que una de las grandes difenrencias entre el pipeline fijo y programable es que el fijo dibuja con circuitos rigidos para calcular la iluminacion, texturas etc mientras que el programable es el mismo programador el cual le dice que calculo hacer en cada paso

4. Si fueras a describir el proceso de **rasterización** ¿Qué dirías?
 calcula con la GPU la cantidad de pixeles que caben en los triangulos que se formaron apartir del Vertx Shading y luego se maldean apartir del color o la textura que contiene ese triangulo

5. ¿Qué son los fragmentos? ¿Es lo mismo un fragmento que un pixel? ¿Por qué? 
 Los fragmetos son el conjunto de los pixeles que caben en cada triangulo formado por el Vertex Shading

6. Explica qué problema resuelve el **Z-buffer** y ¿Qué es el depth test?
 Resuelve un problema de visibilidad el cual trata de los objetos los cuales estan atras de otros objetos, el Z-buffer agrga un nuevo componente a cada pixel dependiendo en la distancia de que este de la camara  

7. ¿Por qué se presenta el problema de la **aliasing**? ¿Qué es el anti-aliasing?
 Se presenta porque soluciona el problema de los pixeles que sobresalen del triangulo, lo que hacen es partir el triangulo en 16 partes si la linea del triangulo corta un pixel dependiedo de cuantos de los 16 pedasos cubre un fraccion correspondiente del tono de ese color se le asigna

8. ¿Qué relación hay entre la iluminación y el fragment shader? Siempre es necesario tener en cuenta la iluminación en un fragment shader? o puedo hacer un fragment shader sin iluminación? Explica que implicaciones tiene esto.
 El fragment Shader decide que color va a atener un pixel especifico y para tomar esa decision toma en cueta entre otras cosas con iluminacion, y si si se puede hacer un fragmente shader sin iluminacion ya que tambien cuenta con factores como la textura etc

9. ¿Qué implica para la GPU que una aplicación tenga múltiples fuentes de iluminación?
 Tendria que trabajar muchisimo mas ya que debe calcular como afecta cada luz individual en una superficie y si son muchas posiblemente se sobre sature

10. Escribe un resumen en tus propias palabras de lo que se necesita para dibujar un triángulo en OpenGL.
 Primero se necesitan saber las coordenadas de los vertices del triangulo en un NDC luego se suben a la GPU mediante el VBO y se configuran sus atributos con un VAO 

11. Escribe un resumen en tus propias palabras de lo que necesitas para poder usar un shader en OpenGL.
 Primero para poder utilizar un shader se necesita escribir, compilar y enlazar al menos un vertex shader y un fragment shader en GLSL dentro de un porgrama de sombreadores el cual se activa con un enlace como glUse Program y luego llama al dicujo con glDrawArrays para que la tarjeta grafica procese la geometria y pinte los pixeles