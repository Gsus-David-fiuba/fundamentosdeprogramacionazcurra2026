Algoritmia, vectores, matriz 
Un ejercicio de cada uno 

No realizar iteraciones innecesariar
Tener en claro el pasaje de parámetros


Algoritmia 
Estructura de control adecuada

PASAJE DE PARÁMETROS MUY IMPORTANTE
Ejercicios donde hay que devolver dos valores sí o sí. (Pasaje por referencia).
Return de dos valores o dos returns o return de un vector NO 


EJEMPLOS DE ERRORES COMUNES

Un vector
Devuelve módulo invocante, el valor máxico del vector y su posición 


Vector con valores numericos, ml
retornar máximo valor almacenado y su posición
1)Hasta dónde hay que recorrer?
Se recorre con for

2) Parámetros de entrada y salida? Cuáles deben modificarse? 
Vector (referencia) entrada
ml (valor) entrada
max (referencia) salida
pos (referencia) salida

3) Cómo es el prototipo de la función? 
void maximo(t_vec vec, int ml, int *pos, int *max) 


Desarrollar una función en lenguaje C que reciba como parámetro un número entero y devuelva al módulo invocante los siguientes valores:
El mayor dígito que compone al número entero recibido, y
La cantidad de veces que dicho digito máximo se encuentra en el número entero recibido.

