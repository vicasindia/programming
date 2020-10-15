"""
Anagrams:

Given two strings, a and b , that may or may not be of the same length, 
determine the minimum number of character deletions required to make a and b anagrams. 
Any characters can be deleted from either of the strings.

Input :
Test cases, T
Two strings a and b, for each test case

Output:
Desired O/P

Constraints :
1 < String lengths <10000

Note :
Anagram of a word is formed by rearranging the letters of the word.

e.g. -> For the word RAM - MAR,ARM,AMR,RMA etc. are few anagrams.

"""

"""
The idea is to make character count arrays 
for both the strings and store frequency of each character.
Now iterate the count arrays of both strings and 
difference in frequency of any character 
abs(count1[str1[i]-‘a’] – count2[str2[i]-‘a’])
in both the strings is the number of character to be removed
in either string.
"""


# function to calculate minimum  
# numbers of characters to be  
# removed to make two strings anagram 

def makeAnagram(a, b): 
    char_count = [0] * 26

    for char in a: 
        char_count[ord(char) - ord('a')] += 1

    for char in b: 
        char_count[ord(char) - ord('a')] -= 1

    return sum(map(abs, char_count))

for tc in range(int(input())):
    a = input()
    b = input()
    print(makeAnagram(a, b))

