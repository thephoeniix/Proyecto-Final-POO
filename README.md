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

# Casos de Prueba
Si se elige la "Opción 1" se crea una pelicula y se le ingresa nombre (Spiderman), año (2019), duración (100) y ventas (20000000). IMPRIME: "Pelicula en estante: 0". se elige la "Opción 2" se imprime "Pelicula: 0    Titulo: Spiderman     Ano: 2019"
Si se elige la "Opción 3" se imprime un menu que te dice "1. Crea actor    2. Crea extra    3. Crea Director" si se elige 1 se ingresa nombre (Tom), personaje (Spiderman), edad (20), se elige la "Opción 4" y se imprime un menu donde si se selecciona la opción 1 que lista a actores se imprime "Actor no.: 0   Actor: Tom  Perosnaje: Spiderman  Edad: 20"
Si se elige "Opción 5" se imprime un menu que muestra si se quiere asignar el actor, director o extra a alguna pelicula, en este caso usaremos la oción uno y se asignara el actor, se imprime "Elige una pelicula por su numero: " se elige el 0 y ya se pide el numero de actor que se quiere asignar y se elige el 0. 

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

