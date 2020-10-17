"""
Given a time in 12-hour AM/PM format,
convert it to military (24-hour) time.

Note:
	Midnight is 12:00:00AM on a 12-hour clock,
	and 00:00:00 on a 24-hour clock. 
	Noon is 12:00:00PM on a 12-hour clock, and 12:00:00 on a 24-hour clock.

Input - a string hh:mm:ssAM or hh:mm:ssPM (01 <= hh <= 12; 00 <= mm, ss <= 59)

Output - hh:mm:ss (00 <= hh <= 23)

                           -HackerRank
"""

def timeConversion(s):
    if s[-2] == 'A':
        if s[:2] == '12':
            return '00'+s[2:-2]
        return s[:-2]
    else:
        if s[:2] == '12':
            return s[:-2]
        ans = str(int(s[:2])+12)

if __name__ == '__main__':

	time = input("Enter time(hh:mm:ssAM/PM): ")
	try:
		military_format = timeConversion(time)
		print(military_format)
	except:
		print("please enter right time, e.g., 08:08:05PM (put leading zeros for single digit).")
	
