# Problem link: https://www.codechef.com/CAFE2020/problems/CFROD

def find_lcm(num1, num2):
 
    if(num1 > num2): 
        num = num1 
        den = num2 
    else: 
        num = num2 
        den = num1 
    rem = num % den 
    while(rem != 0): 
        num = den 
        den = rem 
        rem = num % den

    gcd = den 
    lcm = int(int(num1 * num2)/int(gcd)) 
    
    return lcm 

for _ in range(int(input())):

	n = int(input())
	a = list(map(int, input().split()))

	num1 = a[0]
	num2 = a[1]
	lcm = find_lcm(num1, num2)

	for i in range(2, len(a)):
		lcm = find_lcm(lcm, a[i])

	print(lcm * n)

