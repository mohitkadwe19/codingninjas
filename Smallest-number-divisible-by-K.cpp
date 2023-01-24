#include <bits/stdc++.h>
using namespace std;

int lengthOfNumber(int k)
{
  int currentNumber = 1;
  int length = 1;
  for (int i = 1; i <= k; i++)
  {
    if (currentNumber % k == 0)
    {
      return length;
    }
    else
    {
      currentNumber = currentNumber * 10 + 1;
      length++;
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