i=int(input("Выберите метод вычисления площади треугольника. Введите 1 для вычисления через длины сторон. Введите 2 для вычисления через координаты вершин.\n"))
if(i==1):
	print("Введите длины сторон a, b и c\n")
	a=int(input())
	b=int(input())
	c=int(input())
	if((a<b+c) and (b<a+c) and (c<b+a)):
		p=(a+b+c)/2
		print ("Площадь треугольника равна " ,((p*(p-a)*(p-b)*(p-c))**0.5))
	else:
		print("\nТакого треугольника не существует")
else:
	if i==2:
		print("Введите координаты вершин A(xa ya), B(xb yb) и C(xc yc). Вводите значение x, затем нажимаете на пробел и вводите значение y, далее нажимаете на enter и повторяете действия\n")
		xa=int(input())
		ya=int(input())
		xb=int(input())
		yb=int(input())
		xc=int(input())
		yc=int(input())
		print("Площадь треугольника равна ", (0.5 * ( ( ((xb - xa) * (yc - ya) - (xc - xa) * (yb - ya)) * ((xb - xa) * (yc - ya) - (xc - xa) * (yb - ya)) )**0.5)) )
	else:
		print("Ошибочный ввод")

stop=input()#это для того, чтобы программа останавливалась