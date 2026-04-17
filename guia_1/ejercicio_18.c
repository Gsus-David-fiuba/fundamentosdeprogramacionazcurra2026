/*
18) Se realiza una encuesta para estimar el grado de aceptación de los productos x e y en
el mercado. A cada encuestado se le pregunta si consume el producto x y si consume el producto y. La respuesta puede ser sí o no.
Se pide calcular e informar el porcentaje de consumidores de:
a) del producto x
b) del producto y
c) del producto x solamente
d) del producto y solamente
e) de ambos productos
f) de ninguno de los productos
*/

#include<stdio.h>

int main() {
    //Declaro variables
    int x,y,ambos,ninguno, cliente,contador_x, contador_y, x_activo, y_activo;
    char bucle_principal, bucle_secundario;

    bucle_principal="s";
    bucle_secundario="n";
    x=0;
    y=0;
    ambos=0;
    ninguno=0;



    printf("\nENCUESTA ESTUDIO DE PRODUCTOS X & Y\n");

    while (bucle_principal=='s') {
        //Iniciamos en cero estas variables que sirven para evaluar si el cliente usa uno, ambos o ningún producto
        x_activo=0;
        y_activo=0;

//Empezamos evaluación de productos por separado
        printf("¿Utilizas el producto x? (s/n)");
        scanf("%c", &x);
        if (x=='s') {
            contador_x=1;
        }
        else 
            x_activo=+1;


        printf("Usas el producto y? s/n: ");
        scanf("%c", &y);
        if (y == 's') {
            contador_y=1;

        }   
        else 
            y_activo+=1;

        cliente+=1;

        //Iniciamos validación y comparación de datos 

        if (x_activo=1 && y_activo==1) {
            ambos+=1;
        }
        else if (x_activo==1 && y_activo==0) {
            
        }
        

        
    }


    return 0;
}