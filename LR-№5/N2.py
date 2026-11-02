N = int(input('Сколько чисел вы желаете? '))
sum = 0
fac = 1
skv = 0

for i in range(1, N + 1):
    sum += i
    fac *= i
    skv += i**2

print(f'Сумма: {sum}')
print(f'Факториал: {fac}')
print(f'Сумма квадратов: {skv}')
