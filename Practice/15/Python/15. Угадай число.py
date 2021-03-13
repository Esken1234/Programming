b=1
l=5
import random
while b<10:
    n=random.randint(0, 100)
    print("Давайте поиграем. Отгадайте заданное число. У вас есть 5 попыток. Приступим.\n Введите число\n")
    for i in range(1, int(l)+1):
        a=int(input())
        if a==n:
            print("\nПоздравляю! Вы угадали\n", "\nХотите начать сначала? (1 - ДА )\n")
            x=int(input())
            if x==1: break
            else: exit(0)
        elif i==5:
            print("Вы проиграли.Было загадано : ",n, "\nХотите начать сначала? (1 - ДА )\n")
            x=int(input())
            if x==1: break
            else: exit(0)
        elif n>a:print("\nЗагаданное число больше\n")
        elif i==5:
            print("Вы проиграли.Было загадано : ",n, "\nХотите начать сначала? (1 - ДА )\n")
            x=int(input())
            if x==1: break
            else: exit(0)
        elif n<a:print("\nЗагаданное число меньше\n")
        else:1
stop=input()#это для того, чтобы программа останавливалась