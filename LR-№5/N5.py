num = int(input('Введите число: '))
dubl_num = num
revers = 0
pr = 1

digit = []
while num > 0:
    dig = num % 10
    digit += [dig]
    pr *= dig
    revers = (revers * 10) + dig
    num //= 10

print(f'Количество цифр: {len(digit)}')
print(f'Сумма цифр: {sum(digit)}')
print(f'Произведение цифр: {pr}')
print(f'Развернутое число: {revers}')
