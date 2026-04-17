#Tarea 1: Leer una serie de numeros terminar en 0 e imprimir el promedio

contador = 0
suma=0
estado = True

while estado:
    ingresa = int(input('Escribe un numero natural: '))
    if ingresa != 0:
        suma+=ingresa
        contador=+1
    else:
        estado = False

if contador !=0:
    promedio = suma/contador
    print('El promedio de los numeros es ', promedio)    
else:
    print('El usuario no ingresó números')
