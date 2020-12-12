n=int(input())
print_factorization(n)
stop=input()#это для того, чтобы программа останавливалась

def print_factorization(n: int):
    if(n<4):
		print(n)
	else:
		b=[]
		b1=[]
		i=2
		j=0
		w=1
		w1=1
		n1=n
		t=0
		while(i):
			if(not(n1%i)):
				n1=n1/i
				b.append(i)
				i=2
			else:
				i=i+1
				if((n1/i)==1):
					b.append(n1)
					i=0
				r=len(b)
			while((len(b))>0):
				if((len(b))==1):
					print(b[0])
					b.clear()
				else:
					for q in range(0, (len(b)-2)):
						if((len(b))<2):
							q=len(b)+10000
						else:
							if(b[q]==b[q+1]):
								if(q==((len(b))-2)):
									print(b[0], "^", len(b))
									b.clear()
								else:
									w=b[0]
									w1=q+1
									while(r):								
										if(t<(q+1)):
											b.pop(t)
											t=t+1
										r=r-1
									if(w1>1):
										print(w, "^", w1, "*")
									else: 
										print(w, "*")