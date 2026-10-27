1. Describe brevemente los cambios que realizaste en el código C++ (dónde obtienes el tiempo, cómo y dónde actualizas el uniform).
 en el render loop utilizo el glfwGetTime() para obtener el tiempo desde que se inicia la biblioteca

2. Pega el código modificado de tu *fragment shader*.
 #version 460 core
out vec4 FragColor;
uniform float time;

void main() {

    float greenValue = (sin(time) + 1.0) / 2.0;
    FragColor = vec4(1.0, greenValue, 0.2, 1.0);
}

3. Explica cómo usaste la función de tiempo (`sin`, `cos`, u otra) para lograr el efecto de cambio de color cíclico. ¿Qué rango de valores produce tu cálculo y cómo afecta eso al color final?
 Matematicamente la funcion sen oscila entre -1 y 1 asi creo la funcion sin(time)

4. Incluye una captura de pantalla o **UN ENLACE** a un video mostrando el resultado del triángulo con color cambiante.
 https://youtu.be/oV6cDawx0y8

5. **Reflexión:** ¿Qué otros efectos visuales simples podrías lograr usando el tiempo como `uniform`? Piensa en la posición, el tamaño o la rotación (aunque no hemos visto rotaciones formalmente, ¡intuitivamente podrías intentarlo!). Anota al menos una idea.
 Creo que se puede utilizar como en algo del oceano que este flotando aplicando lo mismo pero sobre coordenas Y