print("Конвертер валют: ")
print("1. Из USD в RUB")
print("2. Из EUR в RUB")

n = int(input('Ваш выбор: '))

if n == 1:
    u = float(input('USD -> '))
    r = u * 84.41
    print(f'RUB -> {r}')
elif n == 2:
    e = float(input('EUR -> '))
    r = e * 96.25
    print(f'RUB -> {r}')
else:
    print('Серьезно?')
