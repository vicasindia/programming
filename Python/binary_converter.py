#Input: Decimal Number (Integer)
#Output: Binary Number (Signed 2's Complement)

num = int(input("Enter the Decimal Number: "))
byt = int(input("Enter the number of bytes you want to your integer be in: "))
bit = byt*8

for i in range(bit):
	if (num<<i) & (1<<(bit-1)):
		print(1, end="")
	else:
		print(0, end="")
print()

