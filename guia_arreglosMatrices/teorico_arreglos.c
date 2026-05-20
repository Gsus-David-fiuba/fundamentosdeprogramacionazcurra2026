#include<stdio.h>

int main(){
//Declarar arreglo en c

//Arreglos unidimensionales
//Debemos indicar, tipo de los elementos, un nombre y la cantidad de elementos en cada dimensión

// tipo nombre_arreglo[cantidad_elementos]

//Arreglo de Elementos enteros
int v_nros[100];
//Arreglo de Elementos reales
float v_reales[100];
//Arreglo Elementos tipo caractes
char v_char[25];
//Arreglo declarado por extensión
int v_pares[] = {2,4,6,8,10};

/*Matrices o arreglos bidimensionales*/

//Matriz de 5 filas por 4 columnas 5×4
int m_enteros[5][4];

//Matriz de 2 filas por 3 columnas de enteros 2×3
int m_enteros[2][3] = {{1,2,3},{4,5,6}}; 

//Los parámetros de tipo arreglo serán pasado siempre por referencia, sin necesidad de inficarlo con el símbolo &
//No se pueden asignar ni comparar arreglos directamente, hay que asignar o comparar sus elementos uno a uno 

//NO SE PUEDE vec_1 = vec_2
//Se tiene que
/*
for (i=0;i<100;i++) vec_1[i] = vec_2[i]
*/

}





