X = float(input('Введите коорд х: '))
Y = float(input('Введите коорд у: '))

if X == 0:
    if Y == 0:
        print('Это центр координатной плоскости')
    else:
        print('Ваша точка находится на оси Оу')
elif Y == 0:
    print('Ваша точка находится на оси Оx')
else:
    if X > 0:
        if Y > 0:
            print('Ваша точка в I четверти')
        else:
            print('Ваша точка в IV четверти')
    else:
        if Y > 0:
            print('Ваша точка в II четверти')
        else:
            print('Ваша точка в III четверти')
