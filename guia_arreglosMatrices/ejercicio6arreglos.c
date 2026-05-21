/*Escribir una función que reciba
a)vector de números enteros
b)cantidad de elementos en el vector
c)deberá devolver la cantidad de valores negativos que hay en el vector recibido
d)la cantidad de elementos positivos que hay en el vector recivido*/

#include<stdio.h>


void funcionEjercicio(int vec[], int cantidad, int *neg, int *pos  ){
    int posi=0, nega=0;
    for (int i=0;i<cantidad;i++) {
        if (vec[i]>0) {
            posi++;
        }
        if(vec[i]<0){
            nega++;
        }
    }
    *pos=posi;
    *neg=nega;
}

int main() {
    int posi1=0,posi2=0,posi3=0,nega1=0,nega2=0,nega3=0;

    int vector[5]={1,-1,0,5,4};
    int vector2[3]={-2,-15,-3};
    int vector3[7]={0,0,0,10,12,12,45};

    funcionEjercicio(vector,5,&nega1,&posi1);
    funcionEjercicio(vector2,3,&nega2,&posi2);
    funcionEjercicio(vector3,7,&nega3,&posi3);

    printf("Negativos: %d      Positivos: %d\n", nega1, posi1);
    printf("Negativos: %d      Positivos: %d\n", nega2, posi2);
    printf("Negativos: %d      Positivos: %d\n", nega3, posi3);


    return 0;
}