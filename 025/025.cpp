#include<iostream>
using namespace std;

int fib(int n)
{
  if(n==1) return 1;
  if(n==2) return 2;
  return fib(n-1) + fib(n-2);
}

double fib2(int n)
{
  double a = 1;
  double b = 1;
  for(int i=2; i<=n; i++)
  {
    b = a + b;
    a = b - a;
  }
  return b;
}

// C++ won't work without using big int libraries...
int main(int argc, char* argv[])
{
  int i=1;
  while(true)
  {
    if((to_string(fib2(1))).length() == 1000)
    {
      cout << i << endl;
      return 0;
    }
    i++;
  }
  return 0;
}

