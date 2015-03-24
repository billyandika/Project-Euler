// 145 is a curious number, as 1! + 4! + 5! = 1 + 24 + 120 = 145.
// Find the sum of all numbers which are equal to the sum of the factorial of their digits.
// Note: as 1! = 1 and 2! = 2 are not sums they are not included.

#include<iostream>
using namespace std;

int fac(int n)
{
  if(n==0) return 1;
  return n*fac(n-1);
}

int main()
{
  int total = 0;
  
  // Loop up to fac(9)&7 since its factors will be greater
  // than itself
  for(int i=10; i<fac(9)*7; i++)
  {
    string s = to_string(i);
    int sumDigits = 0;
    for(int j=0; j<s.length(); j++)
    {
      sumDigits += fac((int)s[j]-'0');
    }
    
    if(sumDigits == i)
    {
      total += sumDigits;
    }
  }
  cout << total << endl;
  return 0;
}
