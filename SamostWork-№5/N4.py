def binar_sick(sp, num):
    L, R = 0, len(sp) - 1
    while L <= R:
        mid = (L + R) // 2
        if sp[mid] == num:
            return mid
        elif sp[mid] < num:
            L = mid + 1
        else:
            R = mid - 1
    return "Мы не нашли ваше число("

a = []
while True:
    try:
        N = int(input("Количество чисел: "))
        while N > 0:
            num = int(input("Ваше число: "))
            a += [num]
            N -= 1
        print(' ')
        print(a)
        a.sort()

        n = int(input("У какого числа вы желаете знать индекс: "))
        break
    except ValueError:
        print("Вы ввели не число!")

print(' ')
print(binar_sick(a, n))
