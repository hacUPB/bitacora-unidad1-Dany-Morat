1. Explica con tus propias palabras el propósito del patrón Factory Method (o Simple Factory, en este caso). ¿Qué problema principal aborda en la creación de objetos?
 El Factory Method sirve para agrupar la creacion de objetos en un solo lugar por ejemplo en vez de tener new Particle() regado por todo el codigo la fabrica crea las particulas esto evita tener codigo repetido para crear objetos evita que el ofApp tenga que saber como se configura cada tipo de objeto ademas permite agregar nuevos tipos sin modificar el codigo, hace el codigo mas ordenado y facil 

2. ¿Qué ventajas aporta el uso de `ParticleFactory` en `ofApp::setup` en comparación con instanciar y configurar las partículas directamente allí? Piensa en términos de organización del código (SRP - Single Responsibility Principle), legibilidad y facilidad para añadir *nuevos* tipos de partículas en el futuro.
 El ofApp::setup solo se encarga de crear la escena, no de configurar partículas, la fabrica se encarga de la creacion y ofApp se mantiene limpio.

3. Imagina que quieres añadir un nuevo tipo de partícula llamada `"black_hole"` que tiene tamaño grande, color negro y velocidad muy lenta. Describe los pasos que necesitarías seguir para implementar esto utilizando la `ParticleFactory` existente. ¿Tendrías que modificar `ofApp::setup`? ¿Por qué sí o por qué no?
 Primero es necesario modificar la fabrica se agregaria un else if (type == "black_hole") { particle->size = ofRandom(10.0f, 15.0f); particle->color = ofColor(0, 0, 0); particle->velocity *= 0.2f; 
 
 Luego agrger el nuevo tipo en ofApp::setup como Particle * p = ParticleFactory::createParticle("black_hole"); particles.push_back(p); addObserver(p); 
 
 ¿Debes modificar ofApp::setup? Si pero solo para llamar a la fabrica con el nuevo tipo

4. El método `createParticle` en el ejemplo es estático. ¿Qué implicaciones (ventajas/desventajas) tiene esto comparado con tener una instancia de `ParticleFactory` y un método de instancia `createParticle()`?.
 Ventajas:  No se necesita crear ni destruir un objeto ParticleFactory para usarlo, se puede llamar desde cualquier parte ademas al no requerir una instancia de la fabrica se evita sobrecarga 

 Desventajas:Los metodos estáticos no se puede usar polimorfismo y una fabrica estatica no puede recordar informacion previa a menos que  se usen variables globales/estaticas internas