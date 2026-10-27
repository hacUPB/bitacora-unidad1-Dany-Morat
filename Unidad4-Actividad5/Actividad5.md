1. Incluye una captura de pantalla del triángulo interactivo funcionando en tu máquina.
 ![alt text](<../Imagenes siscom/Traiangulo cambiando de color 2.png>)
 ![alt text](<../Imagenes siscom/Triangulo cambiando de color.png>)

2. Explica el proceso de normalización de las coordenadas del mouse y cómo se relaciona con el sistema de coordenadas de OpenGL. 
 con la ventana de  glfwGetCursosPos captura la posicion de los pixeles del mouse dividiendo el SCR_WIDTH y SCR_HEIGHT para medir el alto y el ancho acota los valores en un rango de 0 a 1 

3. Explica el proceso de normalización a coordenadas de dispositivo (NDC) y cómo se relaciona con el sistema de coordenadas de OpenGL.
 Con las coordenadas acotadas entre 0 y 1 les aplica operaciones para escalarlas y desplazarlas 
 