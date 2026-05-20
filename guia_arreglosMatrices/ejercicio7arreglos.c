/*
Dado un vector a ordenado ascendente de longitud ml y un elemento p del mismo tipo que los elementos del vector, insertar p en el vector a de modo que siga ordenado. Validar previamente que en el vector haya espacio libre para guardar el nuevo dano
Se soicita resolver recorriendo una sola vez el vector sin utilizar un vector auxiliar*/
#include<stdio.h>
#include<stdbool.h>
# define MAX 100
typedef int vector[MAX];

bool insertarOrdenado(int a[], int *ml, int p ) {
    int i = *ml-1;
    bool exito=false;
    if (*ml>=MAX) {
        exito=false;
    }else{
        while (i>=0 && a[i]>p) {
        a[i+1]=a[i];
        i--;
    }
    a[i+1]=p;
    (*ml)++;
    exito=true;
    }

    return exito;
}
/* Solo para que lo veas funcionando */
int main() {
    vector a = {3, 6, 9, 16, 21, 45};
    int ml = 6;
    int p = 14;

    insertarOrdenado(a, &ml, p);

    for(int i = 0; i < ml; i++){
        printf("%d ", a[i]);
    }
    /* Salida esperada: 3 6 9 14 16 21 45 */
    return 0;
}