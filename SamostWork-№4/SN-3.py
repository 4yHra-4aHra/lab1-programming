weight = int(input('Введите свой вес(в кг): '))
height = float(input('Введите свой рост(в м): '))
bmi = (weight / height ** 2)

print(f'Ваш индекс массы тела: {bmi:.4f}')
if bmi < 18.5:
    print('У вас дефицит массы тела!')
elif bmi >= 30:
    print('У вас ожирение! Срочно сходите к врачу!!!')
elif bmi >= 25:
    print('У вас избыток массы тела!')
else:
    print('Ваше тело в норме)')

