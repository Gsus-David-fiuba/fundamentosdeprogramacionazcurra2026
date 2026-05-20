/*
Escribir una función que dado un numero entero positivo retorne un valor booleano que indique si el mismo es capicúa
Capicúa se refiere que se lee igual al derecho y al reves como 12321
*/

#include<stdio.h>
#include<stdbool.h>

bool esCapicua(int n) {
    int original = n,
     invertido = 0,
     digito = 0;
    
    while (n>0) {
        int digito = n % 10; //Último dígito
        invertido = invertido * 10 + digito;
        n = n / 10; //Sacamos último dígito
    }

    return original == invertido;
}

int main() {
    printf("CALCULANDO CAPICÚAS \n");
    printf("%b \n", esCapicua(12321));
    printf("%b \n", esCapicua(123221));
    printf("\n FIN DEL PROGRAMA \n");

}
