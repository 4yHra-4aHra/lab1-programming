a = int(input("Введите номер месяца: "))
n = a % 12
if (n == 1) or (n == 2) or (n == 0):
    print('Сезон - зима')
elif (n == 3) or (n == 4) or (n == 5):
    print('Сезон - весна')
elif (n == 6) or (n == 7) or (n == 8):
    print('Сезон - лето')
elif (n == 9) or (n == 10) or (n == 11):
    print('Сезон - осень')
else:
    print('Ошибка - это не номер месяца')
