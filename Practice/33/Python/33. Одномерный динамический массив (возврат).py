_print = print
def create(size, a = 0, i = 0):
    p = []
    for j in range(0, size):
        p.append(a)
        a = a + i
    return p

def sort(p, size):
    buff = 0
    i = 1
    while i < size:
        buff = p[i]
        j = i - 1
        while j >= 0 and p[j] > buff:
            p[j + 1] = p[j]
            j = j - 1
        p[j + 1] = buff
        i = i + 1
    return p
def print(p):
    _print(p)
    return 0;

size, a, i, p = 0, 0, 0 , 0
size = int(input("Введите размер массива\n"))
a = int(input("Введите первый элемент\n"))
i = int(input("Введите шаг\n"))
p = create(size, a, i)
p = sort(p, size)
print(p)
stop=input()#это для того, чтобы программа останавливалась