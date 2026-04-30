#include<stdio.h>

#define FILAS 3
#define COLUMNAS 3
/*
a)Poder ingresar los valores de la matriz
b) calcular la diagonal principal
c) Calculas la segunda diagonal principa;
d) Sumar los valores de la fila hasta que encuentre un falor negativo (de parcial, en este caso se usa while y se evita un ciclo innecesarios)
e) acumulador de columnas

*/
// a)
void armar_matriz(int matriz[FILAS][COLUMNAS]){
    for (int i=0;i<FILAS;i++) {
        for (int j = 0; j< COLUMNAS; j++) {
            printf("Ingresa el valor del la matriz posición [%d, %d]: \n", i, j);
            scanf("%d", &matriz[i][j]);
        };
    };
};
// b) Calcular la diagonal principal 
int calcularDiagonalprincipal( int matriz[FILAS][COLUMNAS]) {
    int sum_total = 0;
    for (int i=0 ; i<FILAS;i++) {
        sum_total+= matriz[i][i];
    }
    return sum_total;
}

// c) Calcular segunda diagonal principal
int calc_seg_diagonal(int matriz[FILAS][COLUMNAS]) {
    int sum_total=0;
    for (int i = 0; i <FILAS; i++) {
        sum_total+=matriz[i][FILAS-1-i];
    }
    return sum_total;
};


int main() {

    // Declaramos una matriz de enteros
    int matriz[FILAS][COLUMNAS];
    

    // Inicializamos la matriz con valores: POR EJ. LA SUMA DE LOS SUBINDICES
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            matriz[i][j] = i+j;
        }
    };

    // Imprimimos la matriz
    printf("Matriz:\n");
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Suma total de diagonal principal: %d", calcularDiagonalprincipal(matriz));
    printf("Suma de diagonal secundaria: %d", calc_seg_diagonal(matriz));

    return 0;
}

