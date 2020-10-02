#Simple Calculator

operator = input("Enter an Operator(+, -, *, /): ")
operand1, operand2 = map(int, input("Enter Two operands: ").split())

if operator == '+':
	print("Addition of {} and {} = {}".format(operand1, operand2, operand1 + operand2))

elif operator == '-':
	print("Subtraction of {} from {} = {}".format(operand1, operand2, operand1 - operand2))

elif operator == '*':
	print("Multiplication of {} and {} = {}".format(operand1, operand2, operand1 * operand2))

elif operator == '/':
	try:
		print("Division of {} by {} = {}".format(operand1, operand2, operand1 / operand2))
	except:
		print("Division by Zero")

else:
	print("Please, Enter valid operator.")