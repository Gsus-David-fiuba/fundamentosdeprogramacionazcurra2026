/*

Escribir una función en C que reciba como parámetro un numero entero y devuelva al modulo invocante los siguientes valores:
- el resultado de multiplicar sus digitos pares y
- la cantidad de digitos que cumplieron la condicion y fueron procesados. 

Por ejemplo: 

-> el número con el que se invoca la funcion es 25831 
-> los digitos pares son 2 y 8 
-> La funcion debe devolver los valores: 16 y 2. El 16 por el producto, y el 2 por la cantidad de dígitos.

Nota: para la resolucion de este ejercicio no se pueden utilizar arreglos.

Para la entrega deben subir código de la resolución con el siguientes nombre:
archivo de código: "actividad-03-<tu_padron>.c" (la extensón debe ser .c).
Ejemplo "actividad-03-101203.c"


*/
#include<stdio.h>
#include<stdbool.h>

void funcion_especial( int ingreso_usuario, int *contador_digitos, int *pares) {
  int original, n = ingreso_usuario,
  digito,
  contador= 0,
  producto_pares = 1;

  while (n>0) {
    digito = n%10; //Esta operación deja el resto es decir el dígito final
    if (digito % 2 == 0) { //Revisamos si el dígito resultante es par
        contador+=1;
        producto_pares*=digito;
    }
    n = n/10; //Quitamos un dígito
  }
  *pares = producto_pares;
  *contador_digitos = contador;
}

int main() {
    int ingreso_usuario, a, b;

    funcion_especial(3481, &a,&b);
    printf("Cantidad de pares: %d\n", a);
    printf("Producto entre pares: %d", b);

}
