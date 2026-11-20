strok = int(input("Введите количество строк: "))
stolb = int(input("Введите количество столбцов: "))

matrix = []
for i in range(strok):
    matr = [int(input(f"Ваше {j + 1} число в {i + 1} строке: ")) for j in range(stolb)]
    matrix += [matr]

print("\nИсходная матрица:")
for i in matrix:
    print(i)

res = []
for i in range(stolb):
    mat = [0 for j in range(strok)]
    res += [mat]

prom_res = []

# sp = [el, i, j]
for i in range(len(matrix)):
    for j in range(len(matrix[i])):
        sp = [matrix[i][j], i, j]
        prom_res += [sp]

for i in range(len(res)):
    for j in range(len(res[i])):
        for el in prom_res:
            if el[1] == j and el[2] == i:
                res[i][j] = el[0]

print("\n\nТранспонированная матрица:")
for i in res:
    print(i)
