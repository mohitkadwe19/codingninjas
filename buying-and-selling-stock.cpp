#include <bits/stdc++.h>
using namespace std;

long getMaximumProfit(long *values, int n)
{
  long count = 0, min, max;

  for (int i = 0; i < n - 1; i++)
  {
    if (values[i] > values[i - 1])
    {
      count += (values[i] - values[i - 1]);
    }
  }

  return count;
}

int main()
{
  int n;
  cin >> n;
  long *values = new long[n];
  for (int i = 0; i < n; i++)
  {
    cin >> values[i];
  }
  cout << getMaximumProfit(values, n) << endl;
  delete[] values;
}