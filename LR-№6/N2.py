import random

sp = [random.randint(1, 100) for i in range(30)]

sp.sort()
print(sp)
print(' ')

res = []
for ind in range(len(sp) - 1):
    if sp[ind] == sp[ind + 1]:
        res += [sp[ind]]

for el in res:
    sp.remove(el)

print(sp)
print(f"Список дубликатов: {res}")
