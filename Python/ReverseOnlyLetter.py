# Given a string s, reverse the string according to the following rules:

# All the characters that are not English letters remain in the same position.
# All the English letters (lowercase or uppercase) should be reversed.
# Return s after reversing it.

# Input: s = "Test1ng-Leet=code-Q!"
# Output: "Qedo1ct-eeLg=ntse-T!"

def reverseOnlyLetters(s):
      i = 0
      n = len(s)
      j = n-1
      a = list(s)
      while i < j:
          if not a[i].isalpha():
              i += 1
          if not a[j].isalpha():
              j -= 1
          if a[i].isalpha() and a[j].isalpha():
              a[i], a[j] = a[j], a[i]
              i += 1
              j -= 1
      return "".join(a)
