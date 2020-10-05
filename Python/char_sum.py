"""
Consider lowercase Alphabets from a to z have
 a certain weight as a=1, b=2, ..... z=26. 

Input Format:
String S in lowercase.

Output Format:
Print the summation of weight of each character in the String.

Constraints:
1≤|S|≤100

Explanation:

Consider the String "aba"
Here, the summation is equal to : 1+2+1=4
			    -HackerEarth

"""

string = input("Enter the String in lowercase: ")
sum = 0

for i in string:
	sum += ord(i)-96	# ASCII value of 'a' = 97
print("The summation of weight of each character of String: ", sum)


