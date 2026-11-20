students = [
    ("Иван", 25, 4.5), 
    ("Мария", 22, 4.8), 
    ("Пётр", 30, 4.2), 
    ("Анна", 20, 4.9)
]

oldest = max(students, key = lambda s : s[1])
print(f'Самый старший: {oldest[0]}; {oldest[1]} лет')

best = max(students, key = lambda s: s[2])
print(f'Лучший студент: {best[0]}, балл: {best[2]}')

avg_age = sum(s[1] for s in students) / len(students)
print(f'Средний возраст: {avg_age:.2f}')

# Сортировка по баллу
sorted_students = sorted(students, key = lambda s : s[2], reverse = True)

for el in sorted_students:
    name, age, gpa = el
    print(f'{name}: {gpa}')
