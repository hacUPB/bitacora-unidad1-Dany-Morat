1. Cambia los valores de bufferWidth y bufferHeight: divide por 2, por 4, multiplica por 2, por 4, etc. ¿Qué pasa? ¿Qué observas? ¿Qué crees que está pasando?
 El triangulo se desplaza o se transforma dependiendo del operador matematico, lo ralciono mucho con las graficas de las funciones dependiendo del operador en una funcion se desplaza o se transforma la funcion

2. escribe un resumen de lo que has aprendido hasta ahora y piensa en un experimento del tipo ¿Qué pasaría si?
 Bueno hasta ahora he entendido como funciona el codigo del triangulo que antes no complendia como sus atributos, ademas he conocido nuevos conceptos como el opengl que no sabia que era un lenguaje en si, ademas de su contexto que no puede funcionar sin el. El GLFW crea el contexto y ventanas, tambien esta el framebuffer guarda una pequeña parte en la memoria donde se dibujan los pixeles antes de enviarlos a ala ventana que creo el GLFW, y ya el viewport define en donde se va a dibujar la zona 

3. ¿Qué pasa si cambias el primer parámetro de glDrawArrays a GL_LINES?
  ![alt text](<../Imagenes siscom/captura linea.png>) se pone una sola linea
4. ¿Qué pasa si lo cambias a GL_POINTS? 
 ![alt text](<../Imagenes siscom/Puntos.png>) 
 Se ponen puntos
5. ¿Qué pasa si cambias el tercer parámetro a 2? 
 ![alt text](<../Imagenes siscom/PUNTOS2.png>)
6. ¿Qué pasa si lo cambias a 4?
 ![alt text](<../Imagenes siscom/PUNTOS4.png>)
 no se porque no se cambia pero bueno

1. ¿Qué es el contexto OpenGL?
 El contexto da pie a que el OpenGL funcione correctamente, sin el el OpenGl no se ejecuta

2. ¿Cuál es el rol de la biblioteca GLFW y qué ventaja tiene usarla?
 Crea las ventanas y el contexto del OpenGl, la ventaja que esque con las ventanas se puede trabajar de una manera mas rapida y sencilla

3. ¿Por qué crees que OpenGL necesita un contexto (recuerda la analogía del taller de arte)?
 Porque el contexto es como el es estudio en donde el artista que sera el OpenGL trabaja, sin el, el OpenGL no puede empezar a trabajar

4. ¿En últimas qué será el framebuffer y a qué te recuerda de las dos primeras unidades del curso?
 El FrameBuffer es un pedacito de memoria que utiliza el OpenGL para dibujar los pixeles, esto me hace acordar cuando vimos lo del puntero ya que creo que son muy similares sus conceptos porque ambos muestran un tipo de dirrecion de memoria

5. ¿Qué relación entre en el viewport y el framebuffer?
 Creo que la relacion entre los dos esque el viewport es el que determina en que rango se va a visualizar el framebuffer

6. ¿En todo la analizado hasta ahora qué rol juega los drivers de la GPU y la GPU misma?

7. ¿Por qué crees que sea necesario activar el VSync? ¿Si no lo activas y la imagen es estática qué crees que pase, y si es dinámica?
 El VSycn  es necesario para eliminar el screen Tearing 

8. En esta unidad estamos usando OpenGL moderno, pero ¿Qué es OpenGL Legacy? ¿Qué diferencias hay entre ambos?
 eL OpenGL Legacy es un OpenGl antiguo con sus primeras versiones de API, la diferencia es que el OpenGL actual es multiplataforma y el Lagacy es el modelo original

9. ¿Qué es el shader program? ¿Por qué es importante en OpenGL moderno?

10. Trata de revisar el código setupTriangle(), intuitivamente ¿Qué crees que hace? ¿Qué crees que es el VAO y el VBO?
11. En el ciclo principal (game loop) de OpenGL, notaste que en cada frame (cuadro) le decimos a openGL que use el shader program y el VAO. Si le indicas esto antes del game loop ¿Será necesario seguirlo haciendo en cada loop? Si no es necesario ¿En qué casos crees que esto puede ser útil?
12. Finalmente, recuerda lo que hace `glfwSwapBuffers(mainWindow);` ¿Por qué crees que es importante? ¿Qué pasaría si no lo llamas? ¿Cómo explicas lo que pasa si no lo llamas? (experimenta)