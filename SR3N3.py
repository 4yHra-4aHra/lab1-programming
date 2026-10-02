string = input('Введите строку: ')
Len = len(string)
k_bu = 0
k_cc = 0
k_pr = string.count(' ')
k_zp = 0

for s in string:
    if s.isalpha():
        k_bu += 1
    elif s.isdigit():
        k_cc += 1
    else:
        k_zp += 1

k_zp -= k_pr
print(f'Буквы: {k_bu}')
print(f'Цифры: {k_cc}')
print(f'Пробелы: {k_pr}')
print(f'Знаки препинания: {k_zp}')



