/*
Dado un listado de valores númericos i y x, donde i es un entero mayor que 0 y menor o igual que 00, y x es un número real. Almacenar x en la posición i de un vector. El listado no se ingresa ordenado por posición.
 Informar la cantidad de números y el contenido del vector indicando la posición ocupada por cada número a partir de la primera posición. Omitir las posiciones que no contengan valor.

 Considerar una estructura de datos de tamaño físico de 1000
*/
#include<stdio.h>
# define MF 1000
typedef float vec[MF];

void cargarVector(vec vector) {
    int posicion;
    float ingreso_usuario;

    printf("Ingrese la posición donde ingresarás el número (0<n<=99), termina en 0: ");
    scanf("%d", &posicion);
    
    while (posicion!=0) {
        if (posicion>0 && posicion<=99) {
            printf("Ingrese el número: ");
            scanf("%f", &ingreso_usuario);

            vector[posicion]=ingreso_usuario;

        } else {
            printf("Valor inválido.\n");
        }

            printf("Ingrese la posición donde ingresarás el número (0<n<=99), termina en 0: ");
            scanf("%d", &posicion);        

    }

}

void mostrarvector(vec vector) {
    int i,contador=0;
    for (i=0; i<MF; i++) {
        if (vector[i]!=0) {
            printf("Vector[%d]: %.2f\n", i,vector[i]);
            contador++;
        }
    }

    printf("\nEl vector tiene %d números.\n", contador);
}


int main() {
    vec arregloEjercicio={0};
    cargarVector(arregloEjercicio);
    mostrarvector(arregloEjercicio);

return 0;
}