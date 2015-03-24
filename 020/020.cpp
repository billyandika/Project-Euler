// Find the sum of the digits in the number 100!

#include<iostream>
#include<string>
using namespace std;

double factorial(int n)
{
  if(n==0) return 1;
  return n*factorial(n-1);
}

int main()
{
  // Might have to use bigger ints for this.
  // Won't work with current implementation
  string s = to_string(factorial(100));
  cout << s << endl;
  int sum = 0;
  int i=0;
  while(s[i] != '.')
  {
    sum += (int)s[i] - '0';
    i++;
  }
  cout << sum << endl;
  return 0;
}

// Remember to store 100! in the biggest possible number type
// and in this case it's not unsigned long long int but double
