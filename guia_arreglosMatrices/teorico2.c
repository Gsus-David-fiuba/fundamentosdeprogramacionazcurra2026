#include<stdio.h>
//Declaración de tipos de datos

/*Es conveniente declarar tipos de datos para nuestros arreglos.
La sintaxis para declarar un tipo es la siguiente:

typedef tipo_dato nombreDelTipo

BENEFICIO: 
Cada ves que hagamos un cambio en la declaración del tipo, el mismo se reflejará automáticamente en todas aquellas variables que se hayan declarado con ese tipo

Nota: La declaración de tipos no aplica solamente para los arreglos, es una buena práctica que se puede aplicar a cualquier tipo de dato de los vistos

*/


/*Ejemplo*/

typedef float tv_reales[30];
typedef int tm_enteros[5][7];


//DECLARACIÓN DE CONSTANTES 
/*También es una buena práctica declarar constantes para los máximos físicos de los arreglos
Veamos un ejemplo usando la declaraciónde una constante para el MF (máximo físico), y la declaración de un tipo para el arreglo*/
//EJEMPLO 
# define MF 10 //Máximo físico del arreglo
//# define ML 10
typedef int t_vector[MF]; //Arreglo con valores enteros
    
//Entonces más adelante en el programa podríamos utilizar el tipo y la constante en distintos casos: 

    int cargar_datos(t_vector v, int mf) {
        
    }

int main() {

    //Entonces si ahora queremos declarar un vector de 30 numeros reales utilizaríamos el tipo tv reales
    tv_reales vector_nros_reales;

    //De igual modo si quisiéramos declarar una matriz de 5 filas por 7 columnas de números enteros
    tm_enteros matriz_nros_enteros;


    //Entonces más adelante en el programa podríamos utilizar el tipo y la constante en distintos casos: 
    int cargar_datos(t_vector v, int mf);
  //  ml = cargar_datos(v_nros, MF);
    void mostrar_datos(t_vector v, int ml);

    return 0;
}