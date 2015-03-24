# -*- coding: utf-8 -*-
'''
The Fibonacci sequence is defined by the recurrence relation:

F(n) = F(n−1) + F(n−2), where F(1) = 1 and F(2) = 1.
Hence the first 12 terms will be:

F1 = 1, F2 = 1, F3 = 2, F4 = 3, F5 = 5, F6 = 8, F7 = 13
F8 = 21, F9 = 34, F10 = 55, F11 = 89, F12 = 144
The 12th term, F12, is the first term to contain three digits.

What is the first term in the Fibonacci sequence to contain 1000 digits?
'''

# Naive approach
def fib(n):
  if n <= 1:
    return 1
  return fib(n-1)+fib(n-2)

# Sliding window approach
def fib2(n):
  a = 1
  b = 1
  for i in range(2,n):
    b = a+b
    a = b-a
  return b

n = 0
while True:
  if len(str(fib2(n)))==1000:
    print(fib2(n))
    print("First term is")
    print(n)
    exit()
  n += 1

'''
Runtime:
real  0m5.326s
user  0m5.256s
sys   0m0.047s
'''
