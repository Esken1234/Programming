a=int(input())
b=int(input())
c=int(input())
D=(b*b)-4*a*c
if a==0:
	print("x = ",-c/b)
else:
	if D < 0:
		print("Такого значения х не существует")
	else:
		if D==0:
			print("x = ",-b/(2*a))
		else:
			print("x1 = " , (-b+(D**0.5))/(2*a) ,"\n")
			print("x2 = " , (-b-(D**0.5))/(2*a))

stop=input()#это для того, чтобы программа останавливалась