// Find the thirteen adjacent digits in the 1000-digit number that have the greatest product.

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
  int arr[1000];
  ifstream in("num.txt");
  int i=0;
  unsigned char c = ' ';
  while(in>>c)
  {
    arr[i] = c - '0';
    i++;
  }
  in.close();

  long maxTotal = 0;
  for(int i=0; i<sizeof(arr)/sizeof(int)-13; i++)
  {
    long total=1;
    for(int j=i; j<i+13; j++)
    {
      total = total*arr[j];
    }
    if(total>maxTotal)
      maxTotal = total;
  }
  cout << maxTotal << endl;

  return 0;
}

/* What I learnt: putting the numbers in a txt file and reading
   it will cause problems because it will be taken in as a char
   and there will be an issue when converting to ints becuase the
   value will change to the ASCII number

   Also, if I stopped at !in.eof() it would read in two more characters
   So the solution is while(in >> c)
*/
