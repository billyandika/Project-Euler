# Calculates sum of even numbers in Fibonacci sequence under 4 million

def fibonacci(n):
  if n == 1:
    return 1
  elif n == 2:
    return 2
  else:
    return fibonacci(n-1) + fibonacci(n-2)

sum = 0
x = 1
while fibonacci(x) <= 4000000:
  if fibonacci(x)%2 == 0:
    sum = sum+fibonacci(x)
  x+=1

print sum

