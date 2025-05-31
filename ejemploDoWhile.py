nombre = input('Escriba su nombre: ')
veces = int(input('Cuantas veces quiere imprimir su nombre: '))
conteo = 0
while True:
    print(conteo + 1, nombre)
    conteo += 1
    if conteo >= veces:
        break