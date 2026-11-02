import math

print('       x  |  sin(x)  |  cos(x)  |  tan(x)   ')
print('----------|----------|----------|----------')

for i in range(11):
    x = i * math.pi / 10
    sn = math.sin(x)
    cs = math.cos(x)

    if (sn < 0) or (cs < 0):
        if ((i - 5) % 10 != 0):
            tn = math.tan(x)
            print(f'{x:8.4f} {' |':2} {sn:7.4f} {' |':2} {cs:6.4f} {' |':2} {tn:6.4f}')
        else:
            print(f'{x:8.4f} {' |':2} {sn:7.4f} {' |':3} {cs:6.4f} {' |':3}')
    else:
        if ((i - 5) % 10 != 0):
            tn = math.tan(x)
            print(f'{x:8.4f} {' |':2} {sn:7.4f} {' |':3} {cs:6.4f} {' |':3} {tn:6.4f}')
        else:
            print(f'{x:8.4f} {' |':2} {sn:7.4f} {' |':3} {cs:6.4f} {' |':3}')
