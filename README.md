# fundamentosdeprogramacionazcurra2026
Este es un repositorio donde estarán los ejercicios de Fundamentos de Programación Cátedra Azcurra 1er Cuatrimestre 2026
Contiene los ejercicios de la guía con resoluciones (a mi manera). 

# *Buenas Prácticas:*

## General
- ### Declarar las variables al inicio del main
- ### Los nombres de las variables deben ser explicitos a lo que hacen
- ### No usar breaks fuera de los switch
- ### No usar más de un return en el main
- ### Mucho cuidado con las variables globales
- ### Evitar dar valor inicial a variables que no lo requieren
- ### Dar valor inicial a variables que se usen en condiciones o cuentas para evitar basura

## Condicionales
- ### Si estan relacionados, usar if anidado en su interior preferiblemente
- ### Agregar un valor inicial a las variables si se usaan en condicional

## Ciclos
- ### No usar contador dentro de un for i, es redundante 
- ### Para iteraciones definidas usar for
- ### Para iteraciones indefinidas, usar while
- ### Para validar datos Do While
- ### Cuidado con ciclos infinitos, siempre definir bien las condiciones, por ejemplo while True no!


## Funciones
- ### Declarar variables al inicio del main 
- ### Sólo un return por función
- ### Modularizar las funciones para reutilizacion
- ### No hacer cuentas o condicionales innecesarias en funciones int o booleanas, puede hacer la condición en el return


## Arreglos
- ### Los arreglos tienen que tener el mismo tipo o conceptos. Es decir, si el arreglo es de cierto dato, sólo se ingresa ese tipo de dato (ej: arreglo de ml llovidos todos serán de ml llovidos). Conceptualmente TODOS los elementos tienen que ser lo mismo.


## Cadenas
 - En la parte de modularización, si vas a cargar una palabra o cadena que tiene que validar ciertos parámetros, tienes que hacer una función para cargar la palabra, y otra para la obtener la palabra
 - En linux para limpiar la cadena no se usa fflush, sólo funciona en Windows.
 - Si hay que buscar una palabra o un elemento dentro de un vector y está desordenado, se hace de forma secuencial, si está ordenada, entonces se usa búsqueda binaria.



### Archivos
- No sé qué más
- En los exámenes normalmente se toman manejo de archivos más que nada binario con por ejemplo una salida hacia un archivo de texto
- 
