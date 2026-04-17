#include<stdio.h>

int main() {
    int promedio, cantidad_casos, minimo, maximo,casos,contador,total;

    maximo = 0;
    minimo = 0;
    casos=0;
    total= 0;
    cantidad_casos = 1;

while (casos!=-1) {
    printf("Ingrese cantidad de casos del país: ");
    scanf("%i", casos);
    
    total=total + casos;
    cantidad_casos+=1;

    maximo = casos;

    if (casos<maximo) {
        if (casos>minimo) {
            continue;
        }
    }
    
}
    

    return 0;
}