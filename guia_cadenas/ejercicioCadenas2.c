/*
Escribir un programa modular que solicite el ingreso de dos palabras y luego muestre las mismas según la longitud de cada una de ellas, mostrando primero la de menor longitud.
A igualdad de longitud, mostrar primero la menor de las dos, en términos de orden alfabético.
Las palabras tienen una longitud máxima de 15 caracteres. 

Para la construcción del programa, podés utilizar el editor del intérprete o el IDE que prefieras.
Luego copia y pega lo que hayas hecho en la caja de texto de esta actividad y efectuá la entrega de la misma.
*/
#include <stdio.h>
#include <string.h>

// Función que compara dos palabras y muestra primero la menor
void mostrarOrdenadas(char palabra1[], char palabra2[]) {
    int len1 = strlen(palabra1);
    int len2 = strlen(palabra2);

    if (len1 < len2) {
        printf("%s\n%s\n", palabra1, palabra2);
    } else if (len2 < len1) {
        printf("%s\n%s\n", palabra2, palabra1);
    } else {
        // Si tienen la misma longitud, se comparan alfabéticamente
        if (strcmp(palabra1, palabra2) < 0) {
            printf("%s\n%s\n", palabra1, palabra2);
        } else {
            printf("%s\n%s\n", palabra2, palabra1);
        }
    }
}

int main() {
    char palabra1[16], palabra2[16]; // máximo 15 caracteres + '\0'

    printf("Ingrese la primera palabra: ");
    scanf("%15s", palabra1);

    printf("Ingrese la segunda palabra: ");
    scanf("%15s", palabra2);

    printf("\nPalabras ordenadas:\n");
    mostrarOrdenadas(palabra1, palabra2);

    return 0;
}
