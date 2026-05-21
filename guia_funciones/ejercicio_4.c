/*
Escribir una función que dados 2 números, calcule el porcentaje que el primero representa respecto del segundo.

La fórmula sería: 
porcentaje = 0.b*a
*/
 #include<stdio.h>

 float calculo_porcentaje(float *primer_numero, float *segundo_numero) {
    float resultado,a,b;
    a = *primer_numero; 
    b= *segundo_numero;
    resultado = (a/b)*100;
    return resultado;
 }

 int main() {
    float primer,segundo;
    printf("Ingrese el primer número por favor: ");
    scanf("%f", &primer);
    printf("Ingrese el segundo número por favor: ");
    scanf("%f", &segundo);

    printf("%.0f Representa el %.1f%% de %.0f  ",primer, calculo_porcentaje(&primer, &segundo),segundo);

    printf("\nFIN DEL PROGRAMA\n");

 }