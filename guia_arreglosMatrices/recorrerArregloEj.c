#include<stdio.h>
# define ULTIMO 4

typedef int t_vec[ULTIMO+1];

void calcularCuadrados(t_vec v_nros, int ult_pos) {
    int i;
    for (i=0;i<=ult_pos;i++) {
        v_nros[i]=v_nros[i]*v_nros[i];
    }
}

void mostrar_datos(int v[], int ultima_pos){
    int i;
    for (i=0;i<=ultima_pos;i++){
        printf("%i", v[i]);
        printf("\n");
    }
}

int main() {
    int v_nmros[] = {1,2,3,4,5};
    printf("\nVECTOR ORIGINAL:\n");
    mostrar_datos(v_nmros,ULTIMO);

    printf("\nVECTOR MODIFICADO: \n");
    calcularCuadrados(v_nmros, ULTIMO);

    return 0;
}