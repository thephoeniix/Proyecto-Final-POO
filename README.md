# Proyecto Final 
Este proyecto esta diseñado para la entrega final de Programación Orientada Objetos. Considerando todos los elementos vistos previamente en clase. 

# Contexto
El programa esta diseñado para que un usuario pueda guardar Peliculas, Actores, Extras, Directores y Premios. 
También, el usuario puede asignar Actores, Extra y Director a las Peliulas. De igual manera, se crean Premios y se les otorga al Elenco.

# Funcionalidad
Se puede crear y guardar datos:
- Peliculas guarda datos de Nombre (string), Año (int), Duración (int) y Ventas (int). 
- Actores y guarda datos de Nombre (string), Personaje (string) y Edad (int).
- Extras y guarda datos de Nombre (string), Escena (int) en la que se muestra el extra y Edad (int).
- Director y guarda datos de Nombre (string), Salario (int) y Edad (int).
- Premios y guarda datos de Nombre del premio (string), Año (int) y Nominación. 

# Consideraciones
El programa solo corre en la consola y esta hecho con c++ standard por lo que corre en todos los sistemas operativos
compilar con:
- "g++ elenco.h pelicula.h persona.h premio.h main.cpp"
- correr en linux: "/a.out"
- correr en windows: "a.exe"

# Correcciones
Para este programa se realizaron las siguientes correciones:
- Implemento herencia de manera correcta y util
- Impemento composición (o agregación) sieguiendo mi diagrama de clases
- Implemento clases apegadas a requerimientos a partir de un modelo.

Las correciones dentro del UML:
- Modelo diagramas de clase utilizando UML a partir de un problema.
- Integro el concepto herencia al diseño de clases básicas en UML.
- Incorporo el concepto de composición (o agreagación) al diseño de clases sencillas en mi UML.
- Implemento clases siguiendo el diseño UML correctamente.

