//Ingresar 3 números y hallar el mayor;

#include<stdio.h>

int main() {
    int a,b,c;

    printf("Ingrese el primer número por favor: \n");
    scanf("%i",&a);

    printf("Ingrese el segundo número por favor: \n");
    scanf("%i",&b);

    printf("Ingrese el tercer número por favor: \n");
    scanf("%i",&c);
    
    if (a>b && a>c) {
        printf("%i es el mayor", a);
    } 
    else if(b>c && b>a) {
        printf("%i es el mayor",b);    }
    
    else {
        printf("%i es el mayor", c);
    }

    printf("\nFin del programa\n");
    
        return 0;
}
