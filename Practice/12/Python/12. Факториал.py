n=int(input())
m=int(input())

def factorial(q):
	i=1
	while(i<=q):
		q=q*i
		i=i+1
	return q

n=factorial(n)

a=n-m
a=factorial(a)

m=factorial(m)

print(n/(a*m))


stop=input()#это для того, чтобы программа останавливалась