print('\n')
time = int(input('Введите время в секундах: '))

h, m, s = time // 3600, (time % 3600) // 60, time % 60

print(f'{h : 02d}:{m : 02d}:{s : 02d}')