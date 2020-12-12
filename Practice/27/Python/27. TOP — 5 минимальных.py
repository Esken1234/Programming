x=int(input())
a = list(map(int, input().split()))
q=0
i=1
j=0
b=[]
с=[]
while(i<=len(a)):
    while(j<i):
        b.append(a[j])
        j=j+1
    b=sorted(b, reverse=True)
    if(len(b)>5):
        while(q<5):
            с.append(b[q])
        [print(i, "", sep="", end=" ") for i in с]
        print('\n')
        q=q+1
    else:
        [print(i, "", sep="", end=" ") for i in b]
        print('\n')
    i=i+1    