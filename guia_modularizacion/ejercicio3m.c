/*Dadas dos fechas, informar cuál es la fecha anterrio, los datos se dan según los siguientes dados:

a)cada fecha consiste en 3 números, día,mes y año
b)Cada fecha consiste en un único número en formato ddmmaa
c) Cada fecha consiste en un único número en formato ddmmaa
Puede darse el caso que las fechas sean iguales

*/
//Caso de aammdd F1 010507

#include<stdio.h>
#include<stdbool.h>

//Caso  a) 3 números 
void primeraFecha(int dia1, int mes1, int year1, int dia2, int mes2, int year2) {
    if ( (year1 > year2) || (year1 == year2 && mes1 > mes2) || (year1 == year2 && mes1 == mes2 && dia1 > dia2) ){
        printf("La fecha %i del %i del %i es anterior\n", dia2, mes2, year2);
    }
    else {
        printf("La fecha %i del %i del %i es anterior\n", dia1, mes1, year1);
    }
}

void fecha_formatoUno(int fecha, int *dia, int *mes, int *year) {
    *dia = fecha%100;
    *mes = (fecha/100)%100;
    *year = fecha/10000;
}
void fechaformato2(int fecha, int * dia, int *mes, int *year) {
    *dia = fecha/10000;
    *mes = (fecha/100)%100;
    *year = fecha%10000;
}

void comparacion_fechas(int fecha1, int fecha2) {
    int dia1,dia2,mes1,mes2,year1,year2;

    fecha_formatoUno(fecha1,&dia1,&mes1,&year1);
    fecha_formatoUno(fecha2,&dia2,&mes2,&year2);

    primeraFecha(dia1,mes1,year1,dia2,mes2,year2);

}

int main() {
    int fecha1=20010507;
    int fecha2=19970213;

    comparacion_fechas(fecha1,fecha2);

    return 0;
}






