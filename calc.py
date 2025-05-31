operandoUno = int(input('Ingrese primer valor: '))
operandoDos = int(input('Ingrese segundo valor: '))
print('1. Suma')
print('2. Resta')
print('3. Multiplicacion')
print('4. Division')
opcion = int(input('Elija su opcion: '))
resultado = 0
if opcion == 1:
    resultado = operandoUno + operandoDos
if opcion == 2:
    resultado = operandoUno - operandoDos
if opcion == 3:
    resultado = operandoUno * operandoDos
if opcion == 4:
    resultado = operandoUno / operandoDos
print('El resultado es: ', resultado)