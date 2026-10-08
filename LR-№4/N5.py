# Запрашиваю необходимые значения и операцию
a, b = float(input('1 number: ')), float(input('2 number: '))
choice = input('Введите необходимую операцию над числом(+, -, *, /): ')

# С помощью "match" нахожу результат и вывожу
match choice:
    case '+':
        print(a + b)
    case '-':
        print(a - b)
    case '*':
        print(a * b)
    case '/':
        if b == 0:
            print('Warning!!!')
        else:
            print(f'{(a / b):.2f}')
    case _:
        print('Unknow!')

