captura de nuevo la memoria que ocupa el objeto CircularExplosion compara la jerarquía de clases con los campos en memoria del objeto. ¿Qué puedes observar? ¿Qué información te proporciona el depurador? ¿Qué puedes concluir?
 Comparando la jerarquía de clases con la memoria los datos se almacenan en orden de herencia por ejemplo el primero se encuentra el puntero a la tabla virtual heredado de Particle seguido de los atributos de ExplosionParticle y finalmente los atrivutos propios de CircularExplosion 

¿Cómo se implementa la herencia en C++?
 La herencia se identifica mu facil pues al declarar una clase se utilizan los : segudio de la clase padre 