#include <bits/stdc++.h>
using namespace std;

int lengthOfNumber(int k)
{
  if ((k & 1) == 0 || k == 5)
  {
    return -1;
  }
  int n = 0;
  for (int i = 0; i < k; i++)
  {
    n = (n * 10) % k + (1 % k);
    if (n % k == 0)
    {
      return i + 1;
    }
  }
  return -1;
}

int main()
{
  int k = 19;
  cout << lengthOfNumber(k);
  return 0;
}