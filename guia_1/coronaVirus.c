/*
EJERCICIO: Se tiene una lista de casos confirmados de coronavirus por cada pais se pide:

* Indicar cuál es el promedio mudnial
* Cantidad de Casos mundiales
* Qué cantidad de casos tiene el pais con menos casos
* Qué cantidad de casos tiene el pais con menos casos

Ingrese casos -1 para terminar
keep
*/
#include<stdio.h>
int main() {
    int casos, paises, minimo, maximo, casos_total;
    float promedio;
    casos = 0; 
    paises = 0;
    casos_total= 0;


    printf("Ingrese cantidad de casos (-1 para terminar)");
    scanf("%i", &casos);
        maximo = casos;
        minimo = casos;
    
    while (casos!=-1) {

        paises+=1;
        casos_total+=casos;
        
        if (casos>maximo) {
            maximo = casos;
        }
        if (casos<minimo) {
            minimo = casos;
        }
        printf("\n Ingrese cantidad de casos (-1 para terminar): ");
        scanf("%i", &casos);
    }

    if (paises>0) {
        printf("La cantidad total de casos es: %i\n", casos_total);
        printf("El promedio de casos es: %f\n", (float)casos_total/paises);
        printf("Caso más alto: %i\n", maximo);
        printf("Caso más bajo %i\n", minimo);
    } 
    else 
        printf("No se ingresaron casos.");

    printf("\nFin del programa\n");

    return 0;
}