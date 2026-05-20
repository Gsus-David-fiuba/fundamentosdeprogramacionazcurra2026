/*
Escribir un programa donde el usuario ingrese una secuencia de números terminada en cero y se le informe la cantidad de múltiplos de 2,3,5 y 7. Utilizar una función que dados dos números como parámetros por valor devuelve un valor boolian que indique si el primero es o no múltiplo del segundo
*/

#include<stdio.h>
#include<stdbool.h>

//Primero la función booleana
bool esMultiplo(int num, int multiplo) {
    return (num % multiplo==0); 
}

int main() {
    int num;
    int cont2=0, cont3=0, cont5=0, cont7=0;
   
    printf("Ingrese una secuencia de números (termina en 0): \n");
    scanf("%d",&num);
   
    while (num!=0) {
        if (esMultiplo(num,2)) cont2++;
        if (esMultiplo(num,3)) cont3++;
        if (esMultiplo(num,5)) cont5++;
        if (esMultiplo(num,7)) cont7++;

        printf("Ingrese una secuencia de números (termina en 0): \n");
        scanf("%d",&num);
   
    }
    
    printf("Multiplos de 2: %d\n", cont2);
    printf("Multiplos de 3: %d\n", cont3);
    printf("Multiplos de 5: %d\n", cont5);
    printf("Multiplos de 7: %d\n", cont7);


    printf("\n FIN DEL PROGRAMA \n");
    return 0;
}




