// The sequence of triangle numbers is generated by adding the natural numbers. 
// So the 7th triangle number would be 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28. 
// We can see that 28 is the first triangle number to have over five divisors.
// What is the value of the first triangle number to have over five hundred divisors?

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
  int i=1;
  while(true)
  {
    int triNum = 0;
    triNum += i*(i+1)/2;
    int numOfDivisors = 0;

    // Get number of divisors
    for(int n=1; n<=sqrt(triNum); n++)
    {
      if(triNum%n == 0)
        numOfDivisors+=2;
      if(numOfDivisors > 500)
      {
        cout << triNum << endl;
        return 0;
      }
    }
    i++;
  }

  return 0;
}

// Method: To get triNum, simply use n(n+1)/2 formula
// Then if something is moddable by a number from 1 to the 
// square root of the number, add two so you're adding both
// under and over the square root.
