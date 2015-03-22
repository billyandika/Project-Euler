// Largest prime factor of the number 600851475143

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
    for(int i=5; i*i < n; i+= 6)
      if(n%i == 0 || n%(i+2) == 0)
        return false;
  return true;
}

int main()
{
  long n = 600851475143;
  int highestPrime = 0;
  for(int i=0; i<=sqrt(n); i++)
  {
    if(isPrime(i) && i>highestPrime && n%i== 0)
    {
      highestPrime = i;
    }
  }
  cout << highestPrime << endl;
  return 0;
}


