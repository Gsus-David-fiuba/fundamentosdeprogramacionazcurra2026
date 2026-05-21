/*
En una competencia de salto largo se presentaron 5 participantes. De cada uno se ingresa:
Numero de participante
Fecha de nacimiento(aaaammdd)
Distancia de sus tres saltos expresados en metris
El mejor de los 3 saltos se condifera como la mejor marca optenida

Se pide:
a) Para cada participante mostrar por pantalla el número de participante, la edad y la marca obtenida
b) Informar el número del participante del atleta que obtuvo la mejor marca.
*/

#include<stdio.h>
#include<stdbool.h>

int calculoSalto(int s1,int s2,int s3) {
    int mejorSalto = s1;
    if (s2>mejorSalto) {
        mejorSalto=s2;
    }
    if (s3>mejorSalto) {
        mejorSalto=s3;
    }
    return mejorSalto;
}

int calcularEdad(int fecha){
    return 2026-(fecha/10000);
}

void ingresar_datos (int *n_participante, int *fecha,int *s1, int *s2, int *s3) { 
    printf("Ingresa el número del participante: ");
    scanf("%d", n_participante);

    printf("Escriba la fecha de nacimiento(aaaammdd): ");
    scanf("%d", fecha);
    
    printf("Ingrese los 3 saltos en metros:  \n");
    scanf("%d",s1);
    scanf("%d",s2);
    scanf("%d",s3);
    
}

void mostrarParticipante(int n_participante, int edad, int mejorMarca){ 
    printf("Número: %d, Edad: %d, Mejor marca: %d\n", n_participante, edad, mejorMarca);
}

int main() {
    int i, n_particiante, fecha,s1,s2,s3,edad,marca;
    int mejorDistancia=0, nGanador=0;
    for (i;i<=5;i++){
        ingresar_datos(&n_particiante, &fecha, &s1, &s2, &s3);
        edad= calcularEdad(fecha);
        marca=calculoSalto(s1,s2,s3);
        mostrarParticipante(n_particiante,edad,marca);

        if(marca>nGanador) {
            mejorDistancia=marca;
            nGanador=n_particiante;
        }
    }

    printf("El ganador es %d por su salto de %d metros.\n", nGanador, mejorDistancia);


    return 0;
}



