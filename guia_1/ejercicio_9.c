//Solicitar al usuario que ingrese una temperatura, puede tener decimales ) y la unidad en la que se encuentra (siendo solo cracter F o C)
//Luego el programa debe mostrar la temperatura ingresada convertida en la otra unidad
//F=(Cx1.8)+32
// C=5.0/9.0*(F-32)
#include <stdio.h>


int main() {

    char unidad_temp;
    float temperatura, conversion;

    printf("Conversor de temperatura, por favor, ingrese la unidad a convertir (F o C). Ej: si elige F, se hace la conversión a C\n");
    scanf("%c", &unidad_temp);

    printf("Ingrese la temperatura: ");
    scanf("%f", &temperatura);

    if (unidad_temp == 'C') {
        conversion = (temperatura * 9.0 / 5.0) + 32;
        printf("La conversión de F a C es: %f\n", conversion);

    } else if (unidad_temp == 'F') { 
        conversion = 5.0/9.0*(temperatura-32);
        printf("La conversión de C a F es: %f\n", conversion);
    }
    else {
        printf("Unidad de conversión inválida\n");
    }
    
    printf("Fin del programa\n");


    return 0;
}