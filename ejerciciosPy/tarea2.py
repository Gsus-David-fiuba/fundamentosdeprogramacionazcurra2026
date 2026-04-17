#Ingresar una serie de numeros finalizada en -1. Indicar la cantidad de 0, cantidad de pares y cantidad de impares

estado = True
ceros = 0
impares = 0
pares = 0

while estado:
    ingreso = int(input('Escribe un numero igual o mayor a cero: '))
    if ingreso ==-1:
        estado=False
    elif ingreso == 0:
        ceros+=1
    elif ingreso%2 == 0:
        pares+=1
    elif ingreso%2 != 0:
        impares +=1 
    else:
        print('Dato erróneo, ingrese un nuevo número.')

#dsdfsdfecursos que no sean necesarios

print('La cantidad de ceros ',ceros)
print('La cantidad de pares', pares)
print('La cantidad de impares', impares)
