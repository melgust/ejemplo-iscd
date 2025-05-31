nombre = input('Escriba su nombre: ')
veces = int(input('Cuantas veces quiere imprimir su nombre: '))
conteo = 0
while conteo < veces:
    print(conteo + 1, nombre)
    conteo += 1