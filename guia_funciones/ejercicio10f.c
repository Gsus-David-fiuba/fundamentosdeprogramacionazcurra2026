/*
Escribir una función que dado un tiempo expresado en segundos, devuelva por parámetros el equivalente en días, horas, minutos y segundos
Utilizar esta función dentro de un programa que solicite el valor al usuario.
Se debe validar que el valor ingresado sea entero positivo, de lo contrario deberá mostrar el el mensaje "Valor ingresado inválido"
*/
#include<stdio.h>
void conversor(int ingreso_usuario, int *dias, int *horas, int *minutos, int *segundos) {

    *dias = ingreso_usuario/86400;
    ingreso_usuario= ingreso_usuario%86400;
    *horas = ingreso_usuario/3600;
    ingreso_usuario = ingreso_usuario%3600;
    *minutos = ingreso_usuario/60;    
    ingreso_usuario = ingreso_usuario%60;
    *segundos = ingreso_usuario;
}


int main(){
    int ingreso, days, h, m, s;

    printf("Ingrese segundos: \n");
    scanf("%d", &ingreso); 
    
    if (ingreso<0) {
        printf("Ingreso inválido \n");
    }
    else {
        conversor(ingreso,&days, &h, &m, &s);
        printf("Días: %d, Horas: %d, Minutos: %d, Segundos: %d...", days, h, m ,s);
    }

printf("\n FIN DEL PROGRAMA \n");


    
    
}