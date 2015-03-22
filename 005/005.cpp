// Smallest positive number that is evenly divisible by all of the numbers 
// from 1 to 20

#include<iostream>
using namespace std;

int main()
{
  int num = 1;
  int div = 0;
  while(true)
  {
    for(int i=1; i<=20; i++)
      if(num%i == 0)
        div++;
    if(div==20)
    {
      cout << num << endl;
      return 0;
    }
    num++;
    div = 0;
  }

  return 0;
}

/*
Answer: 232792560

Runtime (using -O3):
real  0m6.813s
user  0m6.777s
sys 0m0.023s
*/
