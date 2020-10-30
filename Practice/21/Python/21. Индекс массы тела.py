def bmi(weight: float, height: float):
    return (weight/(height*height))

def print_bmi(bmi: float):
    if (bmi < 18.5): print("Underweight\n")
    elif ((bmi >= 18.5) and (bmi < 25.0)): print ("Normal weight\n")
    elif ((bmi >= 25.0) and (bmi < 30.0)): print ("Overweight\n")
    elif (bmi >= 30.0): print("Obesity\n")

a,b=input().split()
a=int(a)
b=int(b)
b1=b/100
print_bmi(bmi(a,b1))
stop=input()#это для того, чтобы программа останавливалась