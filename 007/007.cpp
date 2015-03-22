// 10001st prime number

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
  int num = 1;

  int numOfPrimes = 0;
  while(true)
  {
    if(isPrime(num))
    {
      numOfPrimes++;
    }
    if(numOfPrimes == 10001)
    {
      cout << num << endl;
      return 0;
    }
    num++;
  }
  return 0;
}
