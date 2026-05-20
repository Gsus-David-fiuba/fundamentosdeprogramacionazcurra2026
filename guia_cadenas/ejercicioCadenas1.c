/* 
Escribir un programa en C, que:
- declare una cadena para almacenar como máximo 40 caracteres y como valor inicial le asigne tu nombre y apellido
- recorra la cadena e imprima sólo las consonantes, una debajo de la otra
- indique cuantas consonantes hay en tu nombre y apellido

Para la construcción del programa, podés utilizar el editor del intérprete o el IDE que prefieras.
Luego copia y pega lo que hayas hecho en la caja de texto de esta actividad y efectuá la entrega de la misma.
*/
#include<stdio.h>
#include<string.h>

int main() {
    char nombreApellido[40] = "Jesus GUerra"; 
    int i, contador=0;

    for (i = 0; i!=strlen(nombreApellido); i++) {
        if (nombreApellido[i] != 'a' && nombreApellido[i] != 'e' && nombreApellido[i] != 'i' && nombreApellido[i] != 'o' && nombreApellido[i] != 'u'  ) {
            printf("%c \n", nombreApellido[i]);
            if (nombreApellido[i]!= ' '){
                contador+=1;
            }
        }
    }
    return 0;

}
