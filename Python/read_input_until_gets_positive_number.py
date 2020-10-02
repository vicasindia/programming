# Program to read input until user enter a positive number
# e.g. -5 -16 0 61

while True:
	number = int(input("Enter a number: "))
	if number > 0:
		print("Positive number is", number)
		break
		
