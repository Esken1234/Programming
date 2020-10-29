n=int(input())
if (n==2):
    print("Простое")
else:
    for i in range(2, int(n)+1):
        if (not(n%i)): print("Составное")
        elif i==n: print("Простое")
        else: break
stop=input()#это для того, чтобы программа останавливалась