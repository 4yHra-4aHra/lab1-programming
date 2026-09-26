integer = int(input('Введите целое число: '))
fl = float(input('Введите дробное число: '))
string = input('Введите любое слово: ')

print(f'{integer} - {type(integer).__name__}')
print(f'{fl} - {type(fl).__name__}')
print(f'{string} - {type(string).__name__}')