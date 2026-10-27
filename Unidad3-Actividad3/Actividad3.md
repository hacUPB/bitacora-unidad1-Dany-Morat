1. Antes de ejecutar el experimento, ¿Qué esperas ver en memoria (hipótesis)? Ejecuta el código y muestra una captura de pantalla del objeto en la memoria. ¿Qué puedes observar? ¿Qué información te proporciona el depurador? ¿Qué puedes concluir?
 ![alt text](<../Imagenes siscom/Actividad3.3.png>)
 class ofApp : public ofBaseApp {
		public:
				void setup();
				void update();
				void draw();
				void mousePressed(int x, int y, int button);
				void keyPressed(int key);
		    std::vector<Particle*> particles;
		    ~ofApp();
		private:
				void createRisingParticle();
};
  
  Se puede acceder a la dirrecion de memoria del vector Particle con un puntero

2. Usa de nuevo el depurador para capturar un objeto de tipo CircularExplosion. Es posible que tengas que hacer modificaciones mínimas en el código para que puedas capturar este objeto más fácilmente. Observa con el depurador la ventana de Auto o Locals y la ventana de Memory 1. Trata de buscar en memoria todas las partes que componen al objeto tipo CircularExplosion ¿Qué puedes observar en la memoria? ¿Qué información te proporciona el depurador? ¿Qué puedes concluir? NO OLVIDES tener a la mano toda la jerarquía de clases que componen 
 Si creamos un nuevo objeto CircularExplosion como una instancia local se guarda en el stack, y muestra todos las propiedades con un puntero

3. Captura la _vtable de un objeto CircularExplosion, pega la imagen en tu bitácora, pero observa detenidamente la tabla de funciones. ¿Qué puedes observar?

 ![alt text](<../Imagenes siscom/Actividad3.3.3.png>)

 En la tabla virtual se ven la direccion de memoria de las funciones del mismo CircularExplosion

4. Ahora, captura en memoria la _vtable de un objeto StarExplosion, pega la imagen en tu bitácora y observa detenidamente la tabla de funciones.Observa de nuevo ambas tablas y compara. ¿Qué puedes ver? ¿Qué puedes concluir? ¿Qué relación existe entre la tabla de funciones y los métodos virtuales? Esta pregunta que te voy a hacer no es fácil y la idea de hacerla es prepararte mentalmente para lo viene ¿Para qué crees que pueda servir una tabla de funciones virtuales? Para responder esta pregunta trata de pensar en el polimorfismo con interfaces y clases abstractas que viste al estudiar C#, por ejemplo, con interfaces:

![alt text](<../Imagenes siscom/Actividad.3.3.4.png>)

Los metodos virtuales indican que una funcion debe resolverse al momento de la ejecucion asi se permite el polimorfismo mientras que la tabla virtual muestra las direcciones de memoria 
 