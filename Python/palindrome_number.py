#Program to check whether given number is Palindrome or not.
#A number is palindrome if it is equal to its reverse number, e.g 121, 5555.

num = input("Enter an integer: ")
num = str(int(num))

if num == num[::-1]:
	print("Palindrome")
else:
	print("Not a Palindrome")
	
