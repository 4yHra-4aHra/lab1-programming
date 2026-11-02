import random

def dif_dig(n):
    alf = "0123456789"
    for el in alf:
        if str(n).count(el) > 1:
            return False
    return True

def Bull_or_cow(nm, pr):
    nm1, pr2 = str(nm), str(pr)
    res = [0, 0]

    for ind1, el1 in enumerate(nm1):
        for ind2, el2 in enumerate(pr2):
            if el1 == el2:
                if ind1 == ind2:
                    res[0] += 1
                else:
                    res[1] += 1
    return res

num = 11
while dif_dig(num) == 0:
    num = random.randint(1000, 9999)

attemps = 0
while True:
    try:
        attemps += 1
        print(' ')
        nump = int(input("Угадайте 4-значное число: "))
        if nump == num:
            print("Вы угадали!!!")
            print(f"Количество ваших попыток: {attemps}")
            break
        
        elif 1000 <= nump < 10000:
            if dif_dig(nump):
                Res = Bull_or_cow(nump, num)
                print("Вы не угадали!!!")
                print(f"Быков: {Res[0]}; Коров: {Res[1]}")

            else:
                print("Вы ввели число с повторяющимися цифрами!")
        
        else:
            print("Это не 4-значное число!")

    except ValueError:
        print("Вы ввели не число!")
