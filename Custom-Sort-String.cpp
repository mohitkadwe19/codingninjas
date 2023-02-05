#include <bits/stdc++.h>
using namespace std;

string specificOrder(string &x, string &y)
{
  unordered_map<char, int> m;
  for (auto &i : x)
  {
    m[i]++;
  }
  string res = "";
  for (auto &i : y)
  {
    if (m.find(i) != m.end())
    {
      while (m[i]--)
      {
        res += i;
      }
      m.erase(i);
    }
  }
  for (auto &i : m)
  {
    while (i.second--)
    {
      res += i.first;
    }
  }
  return res;
}

int main()
{
  string x = "acabd", y = "abc";
  cout << specificOrder(x, y) << endl;
  return 0;
}