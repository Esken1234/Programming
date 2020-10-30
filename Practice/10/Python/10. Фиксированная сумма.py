s, l1, r1, l2, r2= map(int, input().split())

if l1 <= r1 and l2 <= r2:
    if l1 + l2 <=s and r1 + r2 >= s :
        x2 = s-l1
        if (x2 - r2) > 0 :
            x1 = l1+x2-r2
            x2 = s-x1
        else :
            x1 = l1
            print (x1," ",x2,"\n")
    else:
        print (-1,"\n")
stop=input()#это для того, чтобы программа останавливалась