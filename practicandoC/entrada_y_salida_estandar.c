#include<stdio.h>

int main() {

    /*La librería stdio.h provee las funciones más usadas para interactuar con el usuario*/
    
    //printf muestra en mantalla
    printf("Hola\n"); // \n representa un salto de linea
     //Estructura básica de printf para imprimir variables: printf("texto y %especificador", variable);
    printf("Número entero: %d\n", 42);
    printf("Numero Real: %f\n", 3.14);
    printf("Dos decimales usando .2 al lado del espeficidador de float: %.2f\n", 3.1415);
    printf("Caracter:       %c\n", "A");
    print("Cadena: %c\n", "Hola");
    printf("%d + %d\n", 3, 4, 3+4);

    return 0;
}