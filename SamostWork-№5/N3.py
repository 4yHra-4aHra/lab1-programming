def sort_puz(sp):
    size = len(sp)
    for i in range(size - 1):
        flag = 0
        for ind in range(size - 1 - i):
            if sp[ind] > sp[ind + 1]:
                sp[ind], sp[ind + 1] = sp[ind + 1], sp[ind]
                flag = 1
        if flag == 0:
            break
    return sp

sp = []
while True:
    try:
        size = int(input("Сколько чисел в вашем массиве? "))
        dubl_size = size
        while size > 0:
            num = int(input(f"Введите {dubl_size - size + 1} число: "))
            size -= 1
            sp += [num]
        break

    except ValueError:
        print("Вы ввели не число")

print(sort_puz(sp))
