/*
Escribir una función que dada una fecha en formato aaaammdd (numero entero) la convierta en los parámetros numéricos aaa,mm,dd

Ejemplo: fecha: 20140321 -> dia=21, mes=3, año 2014
*/

#include<stdio.h>

void ordenarFecha(int fecha_usuario, int *dia, int *mes, int *year) {
    int original = fecha_usuario;
    
    *dia = original%100;
    *mes = original/100%100;
    *year = original/10000;

}


int main() {
    int fecha, day, month, yeear;

    fecha = 20010507;

    ordenarFecha(fecha,&day,&month,&yeear);
    printf("Fecha sin arreglar: %d \n", fecha);
    printf("Día: %d \n", day);
    printf("Mes: %d \n", month);
    printf("Año: %d \n", yeear);
}
