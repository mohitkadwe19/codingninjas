#include <bits/stdc++.h>
using namespace std;

string doorStatus(int n)
{
  string str = "";
  for (int i = 0; i < n; i++)
  {
    str += '0';
  }
  for (int i = 0; i < n; i++)
  {
    int person = i + 1;
    for (int j = person - 1; j < n; j += person)
    {
      if (str[j] == '0')
      {
        str[j] = '1';
      }
      else
      {
        str[j] = '0';
      }
    }
  }
  return str;
}

int main()
{
  int n = 2;
  cout << doorStatus(n);
  return 0;
}