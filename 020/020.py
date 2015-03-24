# -*- coding: utf-8 -*-

'''
n! means n × (n − 1) × ... × 3 × 2 × 1

For example, 10! = 10 × 9 × ... × 3 × 2 × 1 = 3628800,
and the sum of the digits in the number 10! is 3 + 6 + 2 + 8 + 8 + 0 + 0 = 27.

Find the sum of the digits in the number 100!
'''

def fac(n):
  if n==0:
    return 1
  return n*fac(n-1)

# Convert to string
s = str(fac(100))

# Put into list of characters
l = list(s)

sum = 0
for i in l:
  sum += int(i)

print sum
