///Dada una fecha con año, mes y día, informar si es correcta o no. Solicitarle los datos al usuario de forma independiente
//Considerar años bisiestos 

/*
El año es bisiesto si este es divisible entre 4 o entre 400 (incluye 29 de febrero)
El año no es bisiesto si es divisible entre 100
*/

/*
Duración de días de cada mes: 

Enero: 31
Febrero: 28 o 29 
Marzo: 31
Abril: 30
Mayo: 31
Junio: 30
Julio: 31
Agosto: 31
Septeimbre: 30
Octubre: 31
Noviembre: 30
Diciembre: 31

*/

#include<stdio.h>

int main() { 

    int dia, mes, year;


    printf("\nValidador de fechas:) \n");
    
    printf("Ingrese por favor el año: \n");
    scanf("%i", &year);

    printf("Ingrese el mes (numero): \n");
    scanf("%i", &mes);
    
    printf("Ingrese el día: \n");
    scanf("%i", &dia);
    
    //Validación de datos... 
    if (year%4==0 || year%400==0) {
        
        if (mes == 1 || mes == 3 || mes == 5 || mes == 7 ||  mes == 8 || mes == 10 || mes == 12) {
            if (dia>=1 && dia <=31) {
                printf("Fecha aprobada:) \n");
            }
            else  {
                printf("Fecha inválida");
            }
        }
        else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
            if (dia>=1 && dia<=30) {
                printf("Fecha aprobada \n");
            }
            else {
                printf("Fecha inválida \n");
            }
        }
        else if (mes==2 ){
            if (dia >=1 && dia <=29) {
                printf("Fecha aprobada \n");
            } 
            else {
                printf("Fecha inválida");
            }
            
        }
    }


    return 0;
}