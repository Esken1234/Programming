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

import random

a=[]
b=[]
b1=[]
c=[]
w,n=0,0
i, u=0, 0
while(u<100000):
    i=0
    while(i<7):
        w=random.randint(1, 10)
        a.append(w)
        i=i+1
    sort(a,7)
    n=(a[0] + a[1] + a[2] + a[3] + a[4] + a[5] + a[6]) / 7
    b.append(n)
    n=(a[1] + a[2] + a[3] + a[4] + a[5]) / 5
    b1.append(n)
    u=u+1
    a.clear()

sort(b,100000)
sort(b1,100000)
i=0
while(i<100000):
    c.append(b[i]-b1[i])
    i=i+1
sort(c,1000)
print(c)
stop=input()#это для того, чтобы программа останавливалась