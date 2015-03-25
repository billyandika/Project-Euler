# It can be seen that the number, 125874, and its double, 251748, contain 
# exactly the same digits, but in a different order.
# Find the smallest positive integer, x, such that 2x, 3x, 4x, 5x, and 6x, 
# contain the same digits.

for i in range(1,1000000):
  if sorted(list(str(i))) == sorted(list(str(2*i))) == sorted(list(str(3*i))) ==\
  sorted(list(str(4*i))) == sorted(list(str(5*i))) == sorted(list(str(6*i))):
    print i
