#include <bits/stdc++.h>
using namespace std;

int countWays(int n)
{
  int cnt = 0;

  for (int k = 0; k < (int)sqrt(2 * n); k++)
  {

    if ((n - (k * (k + 1)) / 2) % (k + 1) == 0)
    {
      cnt++;
    }
  }

  return cnt - 1;
}

int main()
{
  int n = 9;
  cout << countWays(n) << endl;
  return 0;
}