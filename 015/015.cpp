#include<iostream>
using namespace std;

int countRoutes(int n)
{
  int count = 0;
  for(int i=0; i<=n; i++)
    for(int j=0; j<=n; j++)
      count++;
}

int main()
{
  cout << countRoutes(2) << endl;
  cout << countRoutes(20) << endl;
  return 0;
}
