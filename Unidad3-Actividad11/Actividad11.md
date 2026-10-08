1. Explica con tus propias palabras el propósito del patrón State. ¿Cuándo es útil aplicarlo?
 El patron State sirve para organizar comportamiento de un objeto cuando este cambia de "modo" o "etapa" durante la ejecucion en lugar de tener una clase principal repleta de condicionales el patron State saca cada comportamiento especifico a su propia clase independiente

2. Dibuja un diagrama de estados simple para la clase Particle. Muestra los diferentes estados (Normal, Attract, Repel, Stop) como nodos y las transiciones entre ellos como flechas etiquetadas con el evento que las causa (p. ej., la tecla presionada: ‘n’, ‘a’, ‘r’, ‘s’).

 ![alt text](<../Imagenes siscom/DIGRAMA ACTIVIDAD11.jpeg>)

3. Describe las ventajas de usar el patrón State en Particle en lugar de tener un miembro std::string estadoActual y usar un gran if/else if/else o switch dentro de Particle::update() para cambiar el comportamiento. Piensa en cohesión, extensibilidad (añadir nuevos estados) y el Principio Abierto/Cerrado (Open/Closed Principle).
 Con el patron State cada estado esta en su propia clase y toda la logica con los variables auxiliares estan encapsulados unicamente dentro de su estado ademas el patron State el sistema es abierto porque se puede extender su funcionalidad infinitamente creando nuevos estados y esta cerrado porque no se necesitaa alterar el codigo fuente existente 

4. ¿Qué responsabilidad tienen los métodos onEnter y onExit en el patrón State? Proporciona un ejemplo de por qué podrían ser útiles (incluso si no se usan mucho en todos los estados de este caso de estudio). Por ejemplo, ¿Qué podrías hacer en onEnter para AttractState o en onExit para StopState?
 En el patron State los metodos onEnter y onExit actuan como ganchos del ciclo de vida del estado mientras que onEnter se ejecuta una sola vez en el momento exacto en que la particula cambia a ese estado y su proposito es inicializar configuraciones, preparar variables, cambiar atributos visuales o disparar eventos que solo deben ocurrir al inicio y con onExit se ejecuta una sola vez justo antes de que la particula quite ese estado para pasar a otro y su proposito es realizar tareas de limpieza y deshacer efectos secundarios que ya no se necesitan

