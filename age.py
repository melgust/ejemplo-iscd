age = int(input('Ingrese su edad: '))
if age >= 18:
    print('Adulto')
else:
    if age <= 12:
        print('Ninio')
    else:
        print('Adolecente')