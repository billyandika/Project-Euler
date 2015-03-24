// If the numbers 1 to 5 are written out in words: one, two, three, four, five, 
// then there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.
// If all the numbers from 1 to 1000 (one thousand) inclusive were written out 
// in words, how many letters would be used?

#include<iostream>
using namespace std;

int main()
{
  string ones[10] = {"zero", "one", "two", "three", "four", "five", "six", 
                     "seven", "eight", "nine"};
  string tentonineteen[10] = {"ten", "eleven", "twelve", "thirteen", "fourteen",
                              "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
  string tens[10] = {" ", " ", "twenty", "thirty", "forty", "fifty", "sixty", "seventy",
                     "eighty", "ninety"};
  
  string total;
  for(int i=1; i<=1000; i++)
  {
    if(i%1000 == 0)
    {
      total += ones[i/1000] + "thousand";
      continue;
    }
    else {
      if(i%100 == 0)
      {
        total += ones[i/100] + "hundred";
        continue;
      }
      else{
        int n = i ;
        if(i>100)
        { 
          total += ones[i/100] + "hundredand";
          n = i%100;
        }

        if(n<=9)
          total += ones[n];
        if(n>=10 && n<=19)
          total += tentonineteen[n-10];
        if(n>=20 && n<=99)
        {
          if(n%10 == 0)
            total += tens[(n - n%10)/10];
          else {
            total += tens[(n - n%10)/10];
            total += ones[n%10];
          }
        }
      }
    }
  }
  cout << total.length() << endl;
  return 0;
}
