// Let d(n) be defined as the sum of proper divisors of n (numbers less than n 
// which divide evenly into n).
// If d(a) = b and d(b) = a, where a ≠ b, then a and b are an amicable pair and 
// each of a and b are called amicable numbers.
// For example, the proper divisors of 220 are 1, 2, 4, 5, 10, 11, 20, 22, 44, 
// 55 and 110; therefore d(220) = 284. The proper divisors of 284 are 1, 2, 4, 
// 71 and 142; so d(284) = 220.
//
// Evaluate the sum of all the amicable numbers under 10000.

#include<iostream>
using namespace std;

int d(int n)
{
  int sum = 0;
  for(int i=1; i<n; i++)
    if(n%i == 0)
      sum += i;
  return sum;
}

int main()
{
  int total = 0;
  int arr[10000];
  int val;
  for(int i=1; i<10000; i++)
  {
    val = d(i); 
    // Use val < i or val > i to remove duplicates
    // when i is greater than val later on and the
    // condition is met
    if( val < i && d(val) == i) 
      total = total + i + val;
  }
  cout << total << endl;
  return 0;
}
