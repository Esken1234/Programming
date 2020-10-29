a=float(input())
b=float(input())
a1=a
b1=(b*b)**0.5
if b>=0:
	if b==0: print(1)
	elif b==1: print(a)
	else:
		for i in range(2, int(b)+1):
			a=a*a1
		print(a)
else:
	if b==-1: print(1/a)
	else:
		for i in range (2, int(b1)+1):
			a=a*a1
		print(1/a)
stop=input()#это для того, чтобы программа останавливалась