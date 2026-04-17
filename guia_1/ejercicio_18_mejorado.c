/*Se realiza una encuesta para estimar el grado de aceptación de los productos x e y en
el mercado. A cada encuestado se le pregunta si consume el producto x y si consume el
producto y. La respuesta puede ser sí o no.
Se pide calcular e informar el porcentaje de consumidores de:
a) del producto x
b) del producto y
c) del producto x solamente
d) del producto y solamente
e) de ambos productos
f) de ninguno de los productos

porcentaje = (producto * contador_clientes)/100
*/

#include<stdio.h>

int main() {
    float x, y, solo_x, solo_y, contador_clientes, ambos, ninguno;
    char ingreso_x, ingreso_y, bucle_principal, inicio;

    x=0;
    y=0;
    contador_clientes=0;
    solo_x=0;
    solo_y=0;
    ambos=0;
    ninguno=0;

    bucle_principal = 's';

    printf("\n ESTUDIO DE MERCADO X E Y\n");
    printf("Quiere iniciar la encuesta? s/n \n");
    scanf(" %c", &inicio);
    if (inicio != 's')
        bucle_principal='n';


    while (bucle_principal=='s') {
//Iniciamos los ingresos como negativos;
        ingreso_x='n';
        ingreso_y='n';
//Pedimos ambos datos principales
        printf("¿Consumes el producto X? s/n \n");
        scanf(" %c", &ingreso_x);

        printf("¿Consumes el producto Y? s/n \n");
        scanf(" %c", &ingreso_y);
        
        //Iniciamos evaluación de datos
        if (ingreso_x=='s' && ingreso_y=='s') {
            x+=1;
            y+=1;
            ambos+=1;
        }
        else  if(ingreso_x=='s' && ingreso_y=='n') {
            solo_x+=1;
            x+=1;
        }
        else  if(ingreso_x=='n' && ingreso_y=='s') {
            solo_y+=1;
            y+=1;
         }
        else {
            ninguno+=1;
        }

        contador_clientes+=1;

        //Mensaje para bucle
        printf("¿Quieres continuar con la encuesta? s/n \n");
        scanf(" %c", &bucle_principal);

    
    
    }

    if (contador_clientes!=0) {
        //cuenta: porcentaje = (cantidad_producto*total)/100
        printf("Cantidad de personas que consumen X: %f\n", (x/contador_clientes)*100);
        printf("Cantidad de personas que consumen Y: %f\n", (y/contador_clientes)*100);
        printf("Cantidad de personas que consumen solo X: %f\n", (solo_x/contador_clientes)*100);
        printf("Cantidad de personas que consumen solo Y: %f\n", (solo_y/contador_clientes)*100);
        printf("Cantidad de personas que consumen ambos: %f\n", (ambos/contador_clientes)*100);
        printf("Cantidad de personas que no consumen ninguno: %f\n", (ninguno/contador_clientes)*100);

    }
    else {
        printf("No hubo participantes en la encuesta.");
    }

printf("\nFIN DEL PROGRAMA \n");

    return 0;
}