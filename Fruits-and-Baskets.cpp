#include <bits/stdc++.h>
using namespace std;

int findMaxFruits(string &str, int n)
{
  int i = 0, j = 0, ans = 0;
  unordered_map<char, int> mp;
  while (j < n)
  {
    mp[str[j]]++;
    if (mp.size() < 3)
    {
      ans = max(ans, j - i + 1);
      j++;
    }
    else
    {
      while (mp.size() == 3)
      {
        mp[str[i]]--;
        if (mp[str[i]] == 0)
        {
          mp.erase(str[i]);
        }
        i++;
      }
      j++;
    }
  }
  return ans;
}

int main()
{
  int n = 4;
  string str = "AABC";
  cout << findMaxFruits(str, n) << endl;
}