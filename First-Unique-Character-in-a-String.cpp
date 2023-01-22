#include <bits/stdc++.h>
using namespace std;

char findNonRepeating(string str)
{
  int n = str.size();
  char ans = '#';              // store the default value #
  unordered_map<char, int> mp; // map for calculating frequency
  for (int i = 0; i < n; ++i)
  {
    mp[str[i]]++; // calculating freq of each element in str
  }
  for (int i = n - 1; i >= 0; --i)
  {
    if (mp[str[i]] == 1) // if freq is 1 then return the corresponding char
    {
      ans = str[i];
    }
  }
  return ans;
}

int main()
{
  string str = "bbabcbcb";
  cout << findNonRepeating(str) << endl;
  return 0;
}