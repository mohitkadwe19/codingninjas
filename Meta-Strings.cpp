#include <bits/stdc++.h>
using namespace std;

bool checkMeta(string &str1, string &str2)
{
  int s1_len = str1.length();

  int s2_len = str2.length();

  if (s1_len != s2_len)
  {
    return false;
  }

  int prev = -1, curr = -1, count = 0;

  for (int i = 0; i < s1_len; i++)
  {

    if (str1[i] != str2[i])
    {
      count++;

      if (count > 2)
      {
        return false;
      }

      prev = curr;

      curr = i;
    }
  }

  return (count == 2 && str1[prev] == str2[curr] && str1[curr] == str2[prev]);
}

int main()
{
  string str1 = "txv", str2 = "lxx";
  cout << checkMeta(str1, str2) << endl;
  return 0;
}