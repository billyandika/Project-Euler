# Largest prime factor of the number 600851475143
import math

def isPrime(n):
  if n <= 3:
    return n > 1
  elif n%2 == 0 or n%3==0:
    return False
  else:
    i = 5
    while i*i < n:
      if n%i == 0 or n%(i+2) == 0:
        return False
      i+=6
  return True

x = 1
highest = 0
n = 600851475143
while x < math.sqrt(n):
  if isPrime(x) == True and x>highest and n%x == 0:
    highest = x
  x+=1

print highest
