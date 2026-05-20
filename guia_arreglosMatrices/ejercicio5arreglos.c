/*Cargar una serie de números reales positivos en un vector. No se conoce la cantidad exacta de datos, pero se sabe que no superan los 100. :a serie finaliza ingresando 0. Informar el valor máximo, la cantidad de veces que aparece y las posiciones que ocupa*/

#include<stdio.h>
# define MF 100
typedef float vector[MF];

void cargarVector(vector vec, int *ml){
    int cantidad_elementos=0; 
    float ingreso_usuario;
    
    
    printf("Ingrese un número real positivo: " );
    scanf("%f", &ingreso_usuario);
     while(ingreso_usuario!=0 && cantidad_elementos<MF) {
        vec[cantidad_elementos]=ingreso_usuario;
        cantidad_elementos++;
        printf("Ingrese un número real positivo: " );
        scanf("%f", &ingreso_usuario);
    }
    *ml=cantidad_elementos;
}

void calcularMaximo(vector vec, int ml) {
    float max = vec[0];
    int veces=0;
    for (int i=0;i<ml;i++){
        if (vec[i]>max) {
            max=vec[i];
            veces=1;
        }
        else{
            if (vec[i]==max) {
            veces++;
            }
        }
    }
    printf("El máximo del vector es %f y aparece %d veces.\n", max, veces);
    printf("Sus posiciones son: \n");
    for (int i =0;i<ml;i++) {
        if (vec[i]==max) {
            printf("Posición: %d\n", i);
        }
    }
}

int main() {
    vector arreglo={0};
    int ml=0;

    cargarVector(arreglo,&ml);
    calcularMaximo(arreglo, ml);

    return 0;
}