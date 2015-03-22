// 2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.
// What is the sum of the digits of the number 2^1000?

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
  string s = to_string(pow(2,1000));
  int sum = 0;
  int i=0;
  while(s[i]!='.')
  {
    sum += (int)s[i] - '0';
    i++;
  }
  cout << sum << endl;
  return 0;
}
