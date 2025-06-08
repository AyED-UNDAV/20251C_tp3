# Trabajo Práctico 3

## Contexto: análisis de Rendimiento de un equipo de fútbol 5

Un equipo de fútbol jugó 10 partidos. Cada uno de sus 5 jugadores fue evaluado con un puntaje entre 0 y 10 en cada partido, según su rendimiento.

Esta información se encuentra en una matriz de 5x10 (rendimiento[5][10]), donde:

    Cada fila representa a un jugador (jugador 0 a 4).
    Cada columna representa un partido (partido 0 a 9).

Para obtener los puntajes debemos hacer una llamada al método `void obtenerPuntajesRendimiento(int matriz[FILAS][COLUMNAS])` que ya está definido en el archivo `rendimientos.cpp`

## ¿Qué tenemos qué hacer?

1. Mostrar el rendimiento promedio de cada jugador

2. Solicitar al usuario el número de un jugador (entre 0 y 4). Luego:

   Extraer todos los puntajes de ese jugador en los 10 partidos a un vector.
   Ordenar ese vector de menor a mayor.
   Mostrar el vector ordenado, mostrando puntaje del partido y número de partido (de 0 a 9)

## Entregables y forma de entrega

- Se debe entregar un archivo txt contando la estrategia de resolución. Se recomienda primero analizar el problema y luego codificarlo. No es necesario que se extiendan un montón, solo con uno o dos párrafos contándonos con sus palabras cómo van a resolver el problema, está muy bien.
- Se deben comprimir los archivos `.cpp` y el `.txt` en un zip y se deben subir al campus dentro de la entrega.
