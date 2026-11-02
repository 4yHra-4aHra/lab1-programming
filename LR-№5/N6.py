num = int(input('Введите число: '))
dubl_num = num
revers = 0

while num > 0:
    dig = num % 10
    revers = revers * 10 + dig
    num //= 10

if revers == dubl_num:
    print('Ваше число - палиндром!')
else:
    print('Ваше число - обычное(((')
