/*
Escribir una función que reciba un mes y un año como números enteros y devuelva la cantidad de días del mes, considerando los años bisiestos. 

Un año bisiesto es aquel que se divide por 4, salvo que sea divisible por 100, en cuyo caso también debe ser divisible por 400
*/
#include<stdio.h>
int calcular_bisiesto(int year, int mes) {
    int dias;
        if ( (mes ==1) || (mes == 3) || (mes == 5) || (mes == 7) || (mes==8) || (mes==10) || (mes==12) ){
         dias = 31; 
        }  

        else {
            if ( (mes==4) || (mes== 6) || (mes==9) || (mes==11)) {
            dias =  30;
        }

        else {
            if (mes==2) {
                if ((year%400==0) || (year%4==0 && year%100!=0)) {
                    dias=29;
                }
            else {
                dias =28;
                } 
            }
        }
        }

        return dias;
    };


    int main() { 
        int ingreso_year, ingreso_mes;

        printf("Ingresa el año por favor: ");
        scanf("%d", &ingreso_year);
        printf("Ingresa el mes: ");
        scanf("%d", &ingreso_mes);

        printf("El mes %d del %d tiene %d días. \n", ingreso_mes, ingreso_year, calcular_bisiesto(ingreso_year,ingreso_mes));

        return 0;
    }