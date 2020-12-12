x=int(input())
i = 1
while i <= x:
    a=input()
    i += 1
    if (a[0] == 'a'):
        if (a[4] == '5'):
            if (a[5] == '5'):
                if (a[6] == '6'):
                    if (a[7] == '6'):
                        if (a[8] == '1'):
                            print(a,"\n")
                        else: print( -1,"\n")
                    else: print(-1,"\n")
                else: print(-1,"\n")
            else: print(-1,"\n")
        else: print(-1,"\n")
    else: print(-1,"\n")
stop=input()#это для того, чтобы программа останавливалась