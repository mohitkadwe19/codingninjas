#include <bits/stdc++.h>
using namespace std;

char findAddedCharacter(string &s, string &t)
{
  int n = s.size(), m = t.size();
  int i = 0, j = 0;
  while (i < n && j < m)
  {
    if (s[i] != t[j])
      return t[j];
    i++;
    j++;
  }
  return t[j];
}

int main()
{
  string s = "APPLE", t = "APPHLE";
  cout << findAddedCharacter(s, t) << endl;
  return 0;
}