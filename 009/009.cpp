// A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
// a^2 + b^2 = c^2
// For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.
// There exists exactly one Pythagorean triplet for which a + b + c = 1000.
// Find the product abc.

#include<iostream>
using namespace std;

int main()
{
  for(int i=1; i<=1000; i++)
  {
    for(int j=2; j<=1000; j++)
    {
      for(int k=3; k<=1000; k++)
      {
        if((i*i + j*j == k*k) && (i+j+k==1000))
        {  cout << i*j*k << endl;
          return 0;
        }
      }
    }
  }
  return 0;
}
