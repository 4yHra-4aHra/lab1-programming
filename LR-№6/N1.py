import random

n = int(input("Введите размер списка: "))
if n < 50:
    N = [random.randint(1, 100) for i in range(n)]

    print(N)
    print(f"Сумма: {sum(N)}")
    print(f"Среднее: {(sum(N) / n):.5f}")
    print(f"Минимум: {min(N)}")
    print(f"Максимум: {max(N)}")

    print(" ")
    N.sort()
    print(N)

    N = list(dict.fromkeys(N))
    print(N)
    print(len(N))
