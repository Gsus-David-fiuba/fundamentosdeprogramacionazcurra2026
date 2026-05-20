#include<stdio.h>
# define MAX 1000
typedef int vec[MAX];

void ingresar_datos(int ingreso_usuario, vec vector, int *ml) {
    int i=0;
    printf("Ingrese un número (terminar en 0): ");
    scanf("%d", &ingreso_usuario);
    while (ingreso_usuario!=0){
        vector[i]=ingreso_usuario;
        i++;
        printf("Ingrese un número (terminar en 0): ");
        scanf("%d", &ingreso_usuario);
    }
    *ml = i;
}

void mostrarVector(vec vector, int ml) {
    int i;
    printf("La cantidad de elementos es %d y los elementos son: \n", ml );
    for (i=0;i<ml;i++){

        printf("Vec[%d]: %d \n", i,vector[i]);

    }
}

int main() {
    int ingreso_usuario, ml;
    vec arreglo;
    ingresar_datos(ingreso_usuario, arreglo, &ml);
    mostrarVector(arreglo, ml);

    return 0;
}