#include<stdio.h>
#include<stdbool.h>
#define MAX 5

typedef int matriz[MAX][MAX];

void cargarMatriz(matriz m){
    int ingreso_usuario;

    for (int j=0;j<MAX;j++){
        for (int k=0;k<MAX;k++) {
            printf("Ingresa el valor en [%d][%d]: \n", j,k);
            scanf("%d", &ingreso_usuario);
            m[j][k]=ingreso_usuario;
        }
    }
}

void mostrarMatriz(matriz m){
    printf("La matriz es: \n");
    for (int j=0;j<MAX;j++) {
        for (int k=0;k<MAX;k++){
            printf("%d   ", m[j][k]);
        }
        printf("\n");
    }
}

int sumaDiagonal(matriz m){
    int sumaTotal=0; 
    for (int j=0;j<MAX;j++) {
        sumaTotal+=m[j][j];
        }
    return sumaTotal;
    }

    int sumaDiagonalSec(matriz m) {
        int sumaTotal=0;
        for (int i=0;i<MAX;i++) {
            sumaTotal+=m[i][MAX-1-i];
        }
        return sumaTotal;
    }

int sumaTriSup(matriz m){
    int sumaTotal =0;
    for (int j=0;j<MAX;j++) {
        for (int k=j+1;k<j;k++) {
            sumaTotal+=m[j][k];
        }
    }
    return sumaTotal;
}
int sumaTriInf(matriz m){
    int sumaTotal =0;
    for (int j=0;j<MAX;j++) {
        for (int k=0;k<j;k++) {
            sumaTotal+=m[j][k];
        }
    }
    return sumaTotal;
}

bool MatrizDiagonal(matriz m){
    bool esDiagonal = true;
    int k=0, j=0;
    while (j<MAX && esDiagonal){
        while (k<MAX && esDiagonal) {
            if (m[j][k]!=0 && j!=k) {
                esDiagonal=false;
            }
            k++;
        }
        j++;
    }
    return esDiagonal;
}