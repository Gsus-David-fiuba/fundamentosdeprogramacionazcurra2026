#include<stdio.h>

int main() {

    //Hallar la superficie de un triángulo conociendo la base y la altura, solicitarle los datos de entrada al usuario
    //La superficie de un triángulo se calcula como base*altura/2
    int base, altura, superficie;

    printf("Calculo de superficie de un triángulo\n");

    printf("Ingrese la magnitud de la base: \n");
    scanf("%d", &base);

    printf("Ingrese altura: \n");
    scanf("%d", &altura);

    superficie = base*altura/2;

    printf("Superficie del triangulo es: %d\n", superficie);
    
    printf("\nFin del programa\n");



    
    return 0;
}