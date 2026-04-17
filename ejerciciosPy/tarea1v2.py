numeros = []

while True:
    numero = float(input("Ingrese un número (0 para terminar): "))
    if numero == 0:
        break
    numeros.append(numero)

if len(numeros) > 0:
    promedio = sum(numeros) / len(numeros)
    print(f"Promedio: {promedio}")
else:
    print("No se ingresaron números.")
