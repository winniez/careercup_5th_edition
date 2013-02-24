# ID: starcroce
# Date: 2.18.2013(MST)


def Permutation(s1, s2):
  s1 = list(s1)
  s1.sort()
  len1 = len(s1)
  s2 = list(s2)
  s2.sort()
  len2 = len(s2)
  if len1 != len2:
    return False
  else:
    if s1 == s2:
      return True
    else:
      return False

def main():
  s1 = "aabbcc"
  s2 = "abcabc"
  print Permutation(s1, s2)

if __name__=='__main__': main()
