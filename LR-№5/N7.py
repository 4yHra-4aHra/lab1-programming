print('Что вы хотите(Введите цифру(1,2,3,4)): \n1.Прямоугольник \n2.Треугольник')
choice = input("3.Елочку \n4.Ромб\nВаш выбор -> ")
N = int(input('Введите высоту фигуры: '))

match choice:
    case '1':
        M = int(input('Введите длину фигуры: '))
        print('\n')
        while True:
            print('* ' * M)
            N -= 1
            if N <= 0:
                break
    case '2':
        i = 1
        print('\n')
        while True:
            print('*' * i)
            i += 1
            if i > N:
                break
    case '3':
        print('\n')
        penb = (N - 1)
        for i in range(1, N + 1):
            print(' ' * (N - i) + '*' * (i * 2 - 1))
        print(' ' * (penb - 1) + '| |')
    case '4':
        print('\n')
        pol_N = N // 2
        for i in range(1, pol_N + 1):
            print(' ' * (N - i) + '*' * (i * 2 - 1))
        for i in range(pol_N + 1, 0, -1):
            print(' ' * (N - i) + '*' * (i * 2 - 1))
    case _:
        print('\nПятого не дано)))')
