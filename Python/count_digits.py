# Program to count number of digits in an integer

from math import log

number = int(input("Enter an Integer: "))
if number < 0:
	number = int(str(number)[1:])
try:
	print(int(log(number, 10))+1)
except:
	print(1)
	
