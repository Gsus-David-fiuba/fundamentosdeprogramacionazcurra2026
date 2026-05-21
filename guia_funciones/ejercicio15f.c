/*
Diseñar un algoritmo que calcule la aproximación del seno:
sen(x) = x - x^3/3! + 
*/

#include<stdio.h>

double factorial(int primerNumero) { 
    double resultado = 1;
    
    if (primerNumero<0) {
        resultado = 0;
    }
    else {
        for (int i = 1; i<=primerNumero; i++ ) {
            resultado*=i;
        }
   }
    return resultado;
}

double potencia(double numero, double exponente) {
    double resultado_potencia = 1;
    int i;

    if (exponente>=1) {
        for (i=1;i<=exponente; i++) {
            resultado_potencia=numero*resultado_potencia;
        }
    }  else {
        if (exponente<0) {
            for (i=1;i<=(-exponente);i++) {
                resultado_potencia*=numero;
            } 
            resultado_potencia=1/resultado_potencia;
        }

}
return resultado_potencia;
}


double aproximacion_seno(float numero) {
    double aproximacion = 0;
    int x, k = 1;
    for (x=1; x<=10; x+=2)
        {
        aproximacion += k*((potencia(numero, x))/factorial(x));
        k*=-1;
        }
    return aproximacion;
}


