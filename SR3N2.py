import string

alf = '0123456789' + string.ascii_uppercase + string.ascii_lowercase

def f(n, ss, kc):
    n = n.replace(',', '.')
    if n.count('.') == 0:
        n = int(n)
        s = ''
        while n > 0:
            i = n % ss
            s = alf[i] + s
            n //= ss
    else:
        N_c = int(float(n))
        N_d = float(n) - N_c
        s = ''
        while N_c > 0:
            i = N_c % ss
            s = alf[i] + s
            N_c //= ss

        s += '.'
        k = 1
        while (N_d != 0) and (k <= kc):
            Drob = N_d * ss
            i = int(Drob)
            N_d = Drob - int(Drob)
            k += 1
            s += alf[i]
    return s

num = input('\nВведите положительное число в десятичной СС: ')
ss = int(input('Введите основание СС, в которую вы хотите перевести число(Макс -> 62): '))
kc = int(input('Сколько цифр после запятой вам необходимо? '))

print(f(num, ss, kc))


