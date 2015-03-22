// Find the difference between the sum of the squares of the first one hundred 
// natural numbers and the square of the sum.

#include<iostream>
using namespace std;

int main()
{
  // Sum of squares
  int sumSquared = 0;
  for(int i=1; i<=100; i++)
    sumSquared += i*i;
  
  // Square of sum
  int sum = 0;
  for(int i=1; i<=100; i++)
    sum += i;
  int squaredSum = sum*sum;

  cout <<  squaredSum - sumSquared << endl;
  return 0;
}
