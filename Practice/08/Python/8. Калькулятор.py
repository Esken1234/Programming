a,b,c=input().split()
a=int(a)
c=int(c)
b=str(b)
if b=="*":
	print (a*c)
elif b=="-":
	print(a-c)
elif b=="+":
	print(a+c)
elif b==":":
	print (a/c)
else:
	print("\nПроверьте правильность введённых данных")
stop=input()#это для того, чтобы программа останавливалась