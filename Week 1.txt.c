Ex 1.1
Write a program to convert strings to an integer and float and display its type.
Sample Input:
10
10.9




A=int(input())
B=float(input())
Print(a,”,”,type(a),sep=’’)

Print(round(b,1),”,”,type(b),sep=””)

Ex 1.2
Ramesh’s basic salary is input through the keyboard. His dearness allowance is 40% of his basic salary, and his house rent allowance is 20% of his basic salary. Write a program to calculate his gross salary.


basic_salary=int(input())
allow=basic_salary*(40/100)
hra=basic_salary*(20/100)
gross_salary=hra+allow+basic_salary
print(int(gross_salary))

Ex 1.3

Write a simple python program to find the square root of a given floating point number. The output should be displayed with 3 decimal places.



Import math
A=float(input())
B=math.sqrt(a)
Print(“{:.3f}”.format(b))

Ex 1.4
Alfred buys an old scooter for Rs. X and spends Rs. Y on its repairs. If he sells the scooter for Rs. Z (Z>X+Y). Write a program to help Alfred to find his gain percent. Get all the above-mentioned values through the keyboard and find the gain percent.


X=int(input())
Y=int(input())
Z=float(input())
T=x+y
Gain=z-t
Per=(gain/t)*100
Print(format(per,”.2f”),”is the gain percent.”)

Ex 1.5
In many jurisdictions, a small deposit is added to drink containers to encourage people to recycle them. In one particular jurisdiction, drink containers holding one liter or less have a $0.10 deposit and drink containers holding more than one liter have a $0.25 deposit. Write a program that reads the number of containers of each size(less and more)  from the user. Your program should continue by computing and displaying the refund that will be received for returning those containers. Format the output so that it includes a dollar sign and always displays exactly two decimal places.



N=int(input())
M=int(input())
A=n*0.10
B=m*0.25
Total=a+b
Print(f”Your total refund will be ${total:.2f}.”)

Ex 1.6
Justin is a carpenter who works on an hourly basis. He works in a company where he is paid Rs 50 for an hour on weekdays and Rs 80 for an hour on weekends. He works 10 hrs more on weekdays than weekends. If the salary paid for him is given, write a program to find the number of hours he has worked on weekdays and weekends.
Hint:
If the final result(hrs) are in -ve convert that to +ve using abs() function
The abs() function returns the absolute value of the given number.

Z=int(input())
X=abs(z-500)/13
X=x/10
Wkd=x+10

Abc=abs(x)
Print(f”weekdays {wkd:.2f}”)
Print(f”weekend {abc:.2f}”)









