"""
The ISBN(International Standard Book Number) is based upon a 10-digit code and valid if:
1xdigit1 + 2xdigit2 + 3xdigit3 + ......... + 9xdigit9 + 10xdigit10 is divisible by 11.
(e.g. 1401601499)
Input:
 Input the ISBN-10 code as a 10-digit integer.
Output:
 If the ISBN is not a 10-digit integer, output the message “Illegal ISBN” and terminate the program.
 If the number is 10-digit, extract the digits of the number and compute the sum as explained in the explanation.
	If the sum is divisible by 11, output the message, “Legal ISBN”.
	If the sum is not divisible by 11, output the message, “Illegal ISBN”.
									- HackerEarth
"""

def validate_isbn(num):
	count = 0
	n = num
	while(n):
		count += 1
		n //= 10
	if count != 10:
		return False
	sums = 0
	for i in range(10, 0, -1):
		sums += i*(num%10)
		num //= 10
	if sums%11 == 0:
		return True
	else:
		return False


num = int(input("Enter the ISBN-10 code: "))
if validate_isbn(num):
	print("Result: Legal ISBN")
else:
	print("Result: Illegal ISBN")

	
