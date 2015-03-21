#include<iostream>
using namespace std;

int fibonacci(int n)
{
  if(n==1) return 1;
  if(n==2) return 2;
  return fibonacci(n-1) + fibonacci(n-2);
}

int main(int argc, char* argv[])
{
  int sum = 0;
  for(int i=1; fibonacci(i)<=4000000; i++)
  {
    if(fibonacci(i)%2 == 0)
    {
      sum += fibonacci(i);
    }
  }
  cout << sum << endl;
  return 0;
}
