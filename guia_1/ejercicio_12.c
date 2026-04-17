//Dados a y n números enteros, informar la potencía enésima de a por productos sucesivos

#include<stdio.h>

int main() {
    int a, n, i, resultado;
    resultado = 1;
    printf("Ingrese la base: \n");
    scanf("%i", &a);

    printf("Ingrese el exponente: \n");
    scanf("%i",&n);

    if (n == 0) {
        printf("1\n");
    } 
    else if (n<0)  {
        printf("Dato inválido (exponente negativo)\n");
    }
    else {

        for (i=0;i<n;i++) {
        printf("- %i \n", resultado);
        resultado=resultado*a;

        
    }
}
    printf("\n Fin del programa \n");

    return 0;
}
