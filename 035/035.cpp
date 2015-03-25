#include<iostream>
#include<set>
using namespace std;

bool isPrime(int n)
{
  if(n <= 3)
    return n > 1;
  else if(n%2==0 || n%3==0)
    return false;
  else
    for(int i=5; i*i <= n; i+= 6)
      if(n%i == 0 || n%(i+2) == 0)
        return false;
  return true;
}

int main()
{
  set<int> primeSet;
  for(int i=2; i<1000000; i++)
  {
    if(isPrime(i))
      primeSet.insert(i);
  }
  set<int> cPrime;
  set<int>::iterator it = primeSet.begin();
  for(; it != primeSet.end(); ++it)
  {
    if(*it < 10)
    {
      cPrime.insert(*it);
    }
    else if(*it >= 10 && *it < 100)
    {
      int perm = *it/10 + (*it%10)*10;
      if(isPrime(perm))
      {
        cPrime.insert(perm);
        cPrime.insert(*it);
      }
    }
    else if(*it >= 100 && *it < 1000)
    {
      int perm1 = *it/10 + (*it%10)*100;
      int perm2 = perm1/10 + (perm1%10)*100;
      if(isPrime(perm1) && isPrime(perm2))
      {
        cPrime.insert(*it);
        cPrime.insert(perm1);
        cPrime.insert(perm2);
      }
    }
    else if(*it >= 1000 && *it < 10000)
    {
      int perm1 = *it/10 + (*it%10)*1000;
      int perm2 = perm1/10 + (perm1%10)*1000;
      int perm3 = perm2/10 + (perm2%10)*1000;
      if(isPrime(perm1) && isPrime(perm2) && isPrime(perm3))
      {
        cPrime.insert(*it);
        cPrime.insert(perm1);
        cPrime.insert(perm2);
        cPrime.insert(perm3);
      }
    }
    else if(*it >= 10000 && *it < 100000)
    {
      int perm1 = *it/10 + (*it%10)*10000;
      int perm2 = perm1/10 + (perm1%10)*10000;
      int perm3 = perm2/10 + (perm2%10)*10000;
      int perm4 = perm3/10 + (perm3%10)*10000;
      if(isPrime(perm1) && isPrime(perm2) && isPrime(perm3) && isPrime(perm4))
      {
        cPrime.insert(*it);
        cPrime.insert(perm1);
        cPrime.insert(perm2);
        cPrime.insert(perm3);
        cPrime.insert(perm4);
      }
    }
    else if(*it >= 100000 && *it < 1000000)
    {
      int perm1 = *it/10 + (*it%10)*100000;
      int perm2 = perm1/10 + (perm1%10)*100000;
      int perm3 = perm2/10 + (perm2%10)*100000;
      int perm4 = perm3/10 + (perm3%10)*100000;
      int perm5 = perm4/10 + (perm4%10)*100000;
      if(isPrime(perm1) && isPrime(perm2) && isPrime(perm3) && isPrime(perm4)
        && isPrime(perm5))
      {
        cPrime.insert(*it);
        cPrime.insert(perm1);
        cPrime.insert(perm2);
        cPrime.insert(perm3);
        cPrime.insert(perm4);
        cPrime.insert(perm5);
      }
    }

  }
  
  cout << cPrime.size() << endl;
}
