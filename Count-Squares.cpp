#include <bits/stdc++.h>
using namespace std;

int countSquares(int n, int m)
{
  int count = 0;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= m; j++)
    {
      count += (n - i + 1) * (m - j + 1);
    }
  }
  return count;
}

int main()
{
  int n = 3, m = 5;
  cout << countSquares(n, m) << endl;
  return 0;
}