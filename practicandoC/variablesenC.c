#include<stdio.h>
//Las variables en c se escribe el tipo de dato junto al nombre de la variable
//[Tipo de la variable] [nombre de la variable] = [valor]
int main() {
    int x;
    // o 
    int y = 100;
    int edad = 18;
    //Cómo mostrar el valor de una variable
    //Cararter de formateo se usa cuando quieras mostrar una variable

    //Mostrar una variable (caracter de formateo)
    printf("%i", edad); //Muestras el valor de edad 
    print("Edad: %i", edad);

    //Tipos de variables: 
    int entero = 10;
    float decimal = 3.33;
    double real = 3.141592;
    char cadena= 'A';
    char inicial = 65; //65 es el código ASCII de 'A' 

    /*
    Tipos básicos son:
    Tipo    Tamaño típico   Uso
    int     4 bytes         Números enteros
    float   4 bytes         Reales con ~6 dígitos precisión
    double  8 bytes         Reales ~15 dígitos
    char    1 byte          Un caracter o numero pequeño
    */


//Operadores

//Aritméticos
    int a = 10, b = 3;
    a + b; //Suma
    a - b; //Resta
    a *b ; //Multiplicacion
    a / b; //División entera, quita el decimal
    a % b; //Modulo
    
    //Para que la división devuelva entero hay que convertir al menos un operando (float)a/b

//Relacionales (devuelven 1 si verdadero, 0 si falso)
    a == b;
    a != b;
    a > b;
    a < b;
    a >= b;
    a <= b;
    
//Lógicos
    // && And
    // || Or
    //! not


    return 0;
}


