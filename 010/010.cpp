// Find the sum of all the primes below two million.

#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int n)
{
  if(n <= 3)
    return n > 1;
  else if(n%2==0 || n%3==0)
    return false;
  else
    for(int i=5; i*i <= n; i+= 6)
      if(n%i == 0 || n%(i+2) == 0)
        return false;
  return true;
}

int main()
{
  long sum = 0;
  for(int i=1; i<2000000; i++)
  {
    if(isPrime(i))
      sum+=i;
  }
  cout << sum << endl;
  return 0;
}

// Remember to use long to store large values.
