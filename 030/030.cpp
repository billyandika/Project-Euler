// Surprisingly there are only three numbers that can be written as the sum of fourth powers of their digits:
//
// 1634 = 14 + 64 + 34 + 44
// 8208 = 84 + 24 + 04 + 84
// 9474 = 94 + 44 + 74 + 44
// As 1 = 14 is not a sum it is not included.
//
// The sum of these numbers is 1634 + 8208 + 9474 = 19316.
//
// Find the sum of all the numbers that can be written as the sum of fifth powers of their digits.

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
  int total = 0;
  for(int i=2; i<pow(9,5)*7; i++)
  {
    string s = to_string(i);
    int sum = 0;
    for(int j=0; j<s.length(); j++)
    {
      sum += pow((int)s[j] - '0', 5);
    }
    if(sum == i)
      total += i;
  }
  cout << total << endl;
  return 0;
}
