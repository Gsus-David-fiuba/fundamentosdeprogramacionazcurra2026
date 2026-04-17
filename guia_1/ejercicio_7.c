//Ingresar un número del 1 al 7 que represente los días de la semana
//escribir el nombre del día correspondiente, en caso de error informar al usuario

#include <stdio.h>

int main() {
    
    int ingreso;
    
    printf("por favor, ingrese un día de la semana: \n 1) Lunes \n 2) Martes \n 3) Miércoles \n 4) Jueves \n 5) Viernes \n 6) Sábado \n 7) Domingo \n");
    scanf("%i", &ingreso);
    printf("Valor leído: %d\n", ingreso);

    switch (ingreso)
    {
    case 1:
        printf("Lunes");
        break;
    case 2: 
        printf("Martes");
        break;
    case 3: 
        printf("Miércoles");
        break;
    case 4: 
        printf("Jueves");
        break;
    case 5: 
        printf("Viernes");
        break;
    case 6: 
        printf("Sábado");
        break;
    case 7: 
        printf("Domingo");
        break;
    
    default:
        printf("Valor erróneo");
        break;
    }




    return 0;
}