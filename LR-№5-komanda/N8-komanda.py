# 6; 28; 496; 8128
def spd(n):
    s = []
    for d in range(1, int(n**0.5) + 1):
        if n % d == 0:
            s += [d]
            if ((n // d) != n):
                s += [n // d]
    return s

N = input('Введите число на проверку совершенства: ')
try:
    if (sum(spd(int(N))) == int(N)):
        print('Ваше число -> совершенно!')
    else:
        print('Ваше число -> Не совершенно(((')
except ValueError:
    print('Вы ввели не число!')
    