// Largest palindrome made from the product of two 3-digit numbers.

#include<iostream>
#include<string>
using namespace std;

int main()
{
  int n;
  int largest = 0;
  for(int i=100; i<1000; i++)
  {
    for(int j=100; j<1000; j++)
    {
      n = i*j;
      string str = to_string(n);
      reverse(str.begin(), str.end());
      if(to_string(n).compare(str)==0 && i*j>largest)
        largest = i*j;
    }
  }
  cout << largest << endl;
  return 0;
}
