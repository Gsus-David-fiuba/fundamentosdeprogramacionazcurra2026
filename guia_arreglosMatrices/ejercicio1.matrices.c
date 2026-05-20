#include<stdio.h>

/*Dada una matriz 3x4 escribir un programa que permita cargar sus datos y mostrarlos*/

#define FIL 3
#define COL 4

typedef int matriz[FIL][COL];

void cargarMatriz(matriz m) {
    int ingreso_usuario;
    for (int j=0;j<FIL;j++) {
        for (int k=0;k<COL;k++) {
            printf("Ingrese el valor de la matriz[%d][%d]: \n",j,k);
            scanf("%d", &ingreso_usuario);
            m[j][k]=ingreso_usuario;
        }
    }
}
void mostrarMatriz(matriz m){
    for (int j=0;j<FIL;j++) {
        for (int k=0;k<COL;k++) {
            printf("%d   ",m[j][k]);
        }
        printf("\n");
    }
}

int main(){ 
    matriz m;
    cargarMatriz(m);
    mostrarMatriz(m);
    return 0;
}