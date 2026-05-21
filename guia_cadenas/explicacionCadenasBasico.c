#include<stdio.h>
#include<string.h>


int main() {

//En c no existe como tal un tipo de dato string como en Python. Una cadena es un arreglo de caracteres terminado con el caracter nulo \0 (null temrinator).
char saludo[] = "Hola"; //Esto ocupa 5 bytes: 'H', 'o','l','a', '\0'
//El \0 Es obligatorio. SI no está, las funciones de cadenas pueden leer memoria basura y causar errores graves


//Declaracion e inicializacion


//Formas correctas
char str1[] = "Hola mundo"; //Asigna automáticamente el tamaño
char str2[20] = "Hola"; //En este caso se reserva espacio
char str3[] = {'H','o', 'l','a','\0'}; //Forma manual
//Forma incorrecta 
// char str3[] = {'H','o', 'l','a','\0'}; No contiene el null terminator
    

//Diferencia importante: 
char str4[]="Texto"; //Tamaño = longitud +1 (por el null terminator)
char str[10]; //No inicializa, sólo reserva espacio.

//Lectura y escritura de cadenas: 
char nombre[50];
printf("Ingresa tu nombre: ");
//En este caso no se puede usar scanf porque sólo lee el primer término.
fgets(nombre,50,stdin); //Mejor opción porque incluye el salto de línea.

//Para eliminar el salto de línea de fgets usamos
nombre[strcspn(nombre,"\n")] = '\0';

printf("Hola %s!\n", nombre);


//Hablemos de la biblioteca string.h
//Esta agrega funciones que facilitan los procedimientos, entre las más útiles están 
/*
strlen() Logntitud sin contar el null terminator
strcpy() Copiar cadena
strncpy() Copiar con limite (mejor para seguridad)
strcat Concatear cadenas 
strncat Concatenar cadenas con límite (mejor para seguridad)
*/




    return 0;
}