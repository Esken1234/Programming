a=int(input())
b=int(input())
c=int(input())
D=(b*b)-4*a*c
w3=(-b+(D**0.5))/(2*a)
w4=(-b-(D**0.5))/(2*a)
w2=-c/b
if a==0:
	if b==0:
		if c==0:
			print("Корень уравнения любое значение х")
		else:
			print("Такого значения x не существует")
	else:
		print("x = ",w2)
elif D == 0 :
    prin("x = " ,-b / (2 * a))
elif D < 0:  
    print("Такого значения х не существует") 
else:
    prin("x1 = " , w3 ,"\n")
    print("x2 = " , w4)

stop=input()#это для того, чтобы программа останавливалась