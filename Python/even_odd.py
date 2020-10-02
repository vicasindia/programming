# Program to check whether the given number is Even or Odd.
# Any integer number that can be exactly divided by 2 is called as an even number.

# using bit-manipulation (if a number is odd than it's bitwise AND(&) with 1 is equal to 1)

def even_or_odd(n):
	if n & 1:
		print(n, "is Odd number")
	else:
		print(n, "is Even number")

even_or_odd(int(input("Enter a number ")))