print('Конвертер температур:')
print('1. из °C в °F')
print('2. из °F в °C')

choice = int(input('Ваш выбор: '))

if choice == 1:
    cels = float(input('Введите температуру в °C: '))
    fahr = cels * 9/5 + 32
    print(fahr)
elif choice == 2:
    fahr = float(input('Введите температуру в °F: '))
    cels = (fahr - 32) * 5/9
    print(cels)
else:
    print('Are you seriosly?')




