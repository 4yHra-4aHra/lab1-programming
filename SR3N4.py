import datetime

Data = datetime.datetime.today()
today = str(Data)[:10].split('-')

year = int(today[0])
month = int(today[1])
day = int(today[2])

bd = input('\nВведите год своего рождения (В формате ГГГГ-ММ-ДД): ')
birthday = str(bd).split('-')

ybd = int(birthday[0])
mbd = int(birthday[1])
dbd = int(birthday[2])

kol_let = year - ybd

if month - mbd == 0:
    if day - dbd < 0:
        kol_let -= 1
if month - mbd < 0:
    kol_let -= 1

print(kol_let)


