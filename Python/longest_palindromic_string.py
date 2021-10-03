
# Given a string s, return the longest palindromic substring in s.
def longestPalindrome(s):
      def manacher(s):
          assert set.isdisjoint({'$', '^', '#'}, s) # Forbidden letters
          if s == "":
              return (0, 1)
          t = "^#" + "#".join(s) + "#$"
          c = 1
          d = 1
          p = [0] * len(t)
          for i in range(2, len(t) - 1):
              #
              # -- reflect index i with respect to c
              mirror = 2 * c - i
              # = c - (i-c)
              p[i] = max(0, min(d - i, p[mirror]))
              # grow palindrome centered in i
              while t[i + 1 + p[i]] == t[i - 1 - p[i]]:
                  p[i] += 1
                  # adjust center if necessary
              if i + p[i] > d:
                  c = i
                  d = i + p[i]
          (k, i) = max((p[i], i) for i in range(1, len(t) - 1))
          return ((i - k) // 2, (i + k) // 2) # extract solution
      i, j = manacher(s)
      return s[i:j]
