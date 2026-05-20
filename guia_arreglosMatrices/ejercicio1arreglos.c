/*
Dado un n entero positivo y un listado de n números reales, almacenar los números en un vector según el orden de entrada.
Informar el contenido del vector indicando la posición ocupada por cada número a partir de la primera posición. (1<=n<=100)
*/
#include<stdio.h>

# define MF 100
typedef int vector[MF];

void cargar_datos(int numero, int ingreso_usuario, vector vec) {
    int i;
    for (i=0;i<numero;i++){
        printf("Ingrese un número: ");
        scanf("%d", &ingreso_usuario);
        vec[i]=ingreso_usuario;

    }
}

void mostrar_vector(vector vec, int ml) {
    int i;
    printf("La cantidad de datos es: %d y los números son: \n", ml);
    for (i=0;i<ml;i++) {
        printf("%d ", vec[i]);
    }
}

int main() {
int numero, ml, ingreso_usuario;
vector vec;
    printf("Cuántos elementos tendrá el vecotr? Máximo 100: ");
    scanf("%d", &numero);
    if (numero<1 || numero>100){
        printf("Inválido");
    } else {
        cargar_datos(numero, ingreso_usuario, vec );
        mostrar_vector(vec,numero);
    }

    printf("\nFIN DEL PROGRAMA\n");

    return 0;
}
