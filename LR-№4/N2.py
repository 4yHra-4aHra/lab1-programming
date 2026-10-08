# Запрашиваю 3 значение
a, b, c = float(input('1 число: ')), float(input('2 число: ')), float(input('3 число: '))

# Нахожу максимальное и вывожу
if a > b:
    if a > c:
        print(a)
    else:
        print(c)
else:
    if b > c:
        print(b)
    else:
        print(c)

