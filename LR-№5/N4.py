# Функция, которая проверяет, простое ли число или нет
def prime(n):
    return all(n % d != 0 for d in range(2, int(n ** 0.5) + 1))

num = int(input('Введите число: '))
pdel = []

# Нахожу простые делители числа
for d in range(2, int(num ** 0.5) + 1):
    if num % d == 0:
        if prime(d):
            pdel += [d]
        if prime(num // d):
            pdel += [num // d]

res = []
num

# Нахожу количество простых делителей(Одинаковых)
for d in pdel:
    while num % d == 0:
        res += [d]
        num //= d

# Вывожу результат

if len(res) > 0:
    print(res)
else:
    print('У вашего числа нет простых делителей!')
