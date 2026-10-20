1. El código fuente completo de tu proyecto openFrameworks.

2. Explica cómo usaste el patrón Factory para esta nueva partícula.
 Dentro de la fabrica agrege una nueva condicion else id (type==coment) dentro de la fabrica puedo añadir todos sus atributos centralizados como el tamaño, el color y su velocidad

3. Describe cómo implementaste el patrón Observer para esta nueva partícula.
 En el ofApp cada vez que se llame a un cometa llama a un addObserver el cual cuando se preciona una letra llama a el evento asingnado a esa letra al cometa

4. Explica cómo aplicaste el patrón State a esta nueva partícula.
 Como cada particula el cometa arranca como un NormalState hasta que recive la instruccion del observer ahi ejecuta el metodo OnNotify que cambia su estado con el setState()