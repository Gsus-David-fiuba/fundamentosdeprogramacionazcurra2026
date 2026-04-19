/*
Escribir un programa que simule el proceso de control de peso y cantidad de personas que puede transportar un ascensor.
Vamos a suponer que nuestro ascensor puede soportar un máximo de 400 kg y hasta 6 personas.
Nuestra simulación debe proceder del siguiente modo:

- A medida que las personas ingresan al ascensor de a una a la vez, se registra el peso de la persona.

- Supondremos que el ingreso de 0 kg, indica que no hay más personas por subir al ascensor.

- Si en un determinado momento del ingreso de las personas, se supera el peso máximo, el ascensor, advertirá mediante un mensaje, que indique que se ha excedido el peso máximo y nuestra simulación terminará.

- De igual modo, si el ascensor detecta que ha subido una séptima persona al ascensor, deberá advertir de esto, y nuestra simulación terminará.


Por último, si habiéndose indicado que todas las personas están a bordo del ascensor y las condiciones establecidas se cumplen, el ascensor anunciará "ascensor en movimiento"

*/

#include<stdio.h>

int main() {

    int ingreso_peso, suma_peso, contador_personas;
    suma_peso=0;
    contador_personas=0;
    ingreso_peso = -1;

    while (suma_peso<=400 && contador_personas<=6 && ingreso_peso!=0)
    {
        printf("Ingresa tu peso por favor (0 para finalizar): "); 
        scanf("%i", &ingreso_peso);
        if (ingreso_peso!=0){
            suma_peso+=ingreso_peso;
            contador_personas+=1;
            }
        }


if (suma_peso>400) {
    printf("Se excedió el peso máximo");
}

else if (contador_personas>6 ) {
    printf("Se excedió el número de personas");
}
else {
    printf("Ascensor en movimiento");
}



printf("\nFIN DEL PROGRAMA\n");
    return 0;
}