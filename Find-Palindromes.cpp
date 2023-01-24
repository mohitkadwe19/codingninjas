#include <bits/stdc++.h>
using namespace std;

vector<int> getPalindromes(int n)
{
  vector<int> ans;
  for (int i = 1; i <= n; i++)
  {
    int temp = i;
    int rev = 0;
    while (temp > 0)
    {
      int lastDigit = temp % 10;
      rev = rev * 10 + lastDigit;
      temp = temp / 10;
    }
    if (rev == i)
    {
      ans.push_back(i);
    }
  }
  return ans;
}

int main()
{
  int n = 12;
  vector<int> ans = getPalindromes(n);
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }
  cout << endl;
}