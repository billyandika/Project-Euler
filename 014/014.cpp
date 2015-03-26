#include<iostream>
using namespace std;

int main()
{
  long maxCount = 0;
  long maxNum;
  for(int i=2; i<1000000; i++)
  {
    long count = 1;
    long n = i;
    while(n > 1)
    {
      if(n%2 == 0)
        n = n/2;
      else 
        n = n*3+1;
      count++;
    }
    if(count > maxCount) {
      maxCount = count;
      maxNum = i;
    }
  }
  cout << "Max sequence length: " << maxCount 
       << ", starting number: " << maxNum << endl;
  return 0;
}

// Need to use long because some numbers near a million
// might shoot over int range
//
// Also make sure that count starts at 1, because we are
// already taking the first number into account
