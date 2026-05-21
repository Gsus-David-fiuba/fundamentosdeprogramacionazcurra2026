/*Dada una fecha en formato aaaammdd, verificar si es correcta.
Si lo es, informarla según 'dd de cccc de aaaaa
Si no lo es, mostrar un mensaje de error acorde

*/

#include<stdio.h>
#include<stdbool.h> 

void conversorFecha(int fecha, int*dia,int*mes,int*year) {
    *dia = fecha%100;
    *mes = (fecha/100)%100;
    *year = fecha/10000;
}

bool validarfecha(int dia, int mes, int year) {
    bool valido = false;
    
    if ( (dia == 29) && (mes ==2) && (year%4==0) & (year%100 != 0) || (year%400==0)) {
        valido = true;
    }
    
}

void mostrarfecha(int dia, int mes, int year) {
    if (mes == 1 ) {

    }






    
}