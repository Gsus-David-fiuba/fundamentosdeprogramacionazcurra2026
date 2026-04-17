//Generar un dibujo por pantalla solicitando al usuario la alturra
//Ejemplo: altura=5 debe quedar 
/*
*
**
***
****
*****
*/

#include<stdio.h>

int main() { 
    int altura,i,ii;
    
    printf("Ingrese altura: ");
    scanf("%d", &altura);

    for (i=0;i<altura;i++) {
        for (ii=0; ii<=i;ii++) {
            printf("*");
        }
        printf("\n");
    }
        


    return 0;
}