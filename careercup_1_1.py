# ID: starcroce
# Date: 2.17.2013(MST)


array = raw_input('Input array: ')
strlen = len(array)
list_array = list(array)
list_array.sort()

final = 0
for i in range(strlen-1):
  if list_array[i] == list_array[i+1]:
    result = 1
    final += result
  else:
    result = 0
    final += result
  
if final == 0:
  print "The string has all unique characters"
else:
  print "The string does not have all unique characters"
