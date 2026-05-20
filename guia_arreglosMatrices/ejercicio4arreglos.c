/*Cargar una serie de números reales positivos en un vector. No se conoce la cantidad de datos, pero se sabe que no superan los 100. Finaliza al ingresar 0. 
Utilizar una función que invierta el contenido del vector

Informar la el contenido del vector indicando la posición ocupada por aca número a partir de la primera posición */

#include<stdio.h>
# define  MF 100
typedef float vector[MF];

int cargarVector(vector vec) {
    int ml=0;
    float ingreso_usuario;
    printf("Por favor ingrese un numero real positivo (termina en cero): ");
    scanf("%f",&ingreso_usuario);

    while(ingreso_usuario!=0 && ml<MF-1) {
        if (ingreso_usuario>0){
            vec[ml]=ingreso_usuario;
            ml++;
        } else {
            printf("El valor debe ser positivo. \n");
        }
        if (ml<MF) {
            printf("Por favor ingrese un número real positivo (termina en cero): ");
            scanf("%f",&ingreso_usuario); 
        }
       
    }

    return ml;
}

void invertir(vector vec, int ml) {
    int inicio = 0;
    int final = ml-1;
    float auxiliar;

    while (inicio<final) {
        auxiliar=vec[inicio];
        vec[inicio]=vec[final];
        vec[final]= auxiliar;

        inicio++;
        final--;
    }
}

void mostrarVector(vector vec, int ml) {
    printf("El vector es el siguiente: \n");
    for (int i=0;i<ml;i++) {
        printf("Vec[%d]: %.2f\n", ml, vec[i]);

    }
        printf("Y tiene %d elementos\n", ml);    
}

int main() {
    vector arreglo;
    int ml;
    ml = cargarVector(arreglo);
    mostrarVector(arreglo, ml);
    printf("Vector invertio: \n");
    invertir(arreglo, ml);
    mostrarVector(arreglo,ml);


    return 0;
}
