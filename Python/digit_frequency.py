"""
 Given a string, consisting of alphabets and digits, find the frequency of each digit in the given string.
                - HackerRank
"""

string = input("Enter the string(alpha-numeric): ")
freq = [0]*10
for i in string:
	if i.isnumeric():
		freq[int(i)] += 1
print("Digits frequency in order 0-9 are: ")
for i in freq:
	print(i, end=" ")
print()

