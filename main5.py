s_ch = []
k_ch = int(input("\nСколько чисел вы хотите написать? \n"))
print("Принял! \n")

for i in range(k_ch):
    s_ch += [int(input(f'Введите {i + 1} число: '))]

print(sum(s_ch) / len(s_ch))
print(min(s_ch))
print(max(s_ch))