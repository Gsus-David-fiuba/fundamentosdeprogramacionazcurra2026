/*Escribir un programa modular que reciba no más de 10 palabras
Cada palabra no tendrá más de 20 caracteres
Al finalizar las cargas mostrar las palabras
Luego ordenar las palabras alfabéticamente  
Por inserción 

Después lo hacemos con otra tabla que se llame legajo (una función que cargue el nombre y el legajo) (otra función que valide los datos)
Después mostrar ambos.
*/


#include<stdio.h>
#include<stdbool.h>
#include<string.h>

#define MAX_CARACTER 20
typedef char arreglo[10];
char nombre[MAX_CARACTER];

char cargarNombre() {
    printf("Escribe tu nombre por favor: ");
    fgets(nombre, sizeof(nombre), stdin);

    return nombre;
}

char obtener_nombre(nombre) {
    if (sizeof(nombre)>20) {
        printf("El nombre excede la cantidad de caracteres");
    }
    else {
        printf("Nombre agregado correctamente.");
        
    }
}
