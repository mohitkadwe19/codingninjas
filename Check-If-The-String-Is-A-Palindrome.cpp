#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s)
{
  string str;

  for (auto it : s)

  {

    if (it <= 'z' && it >= 'a')

    {

      str += toupper(it);
    }

    if (it <= 'Z' && it >= 'A')

    {

      str += toupper(it);
    }

    if (it <= '9' && it >= '0')

    {

      str += toupper(it);
    }
  }

  int n = str.length();

  for (int i = 0; i < n / 2; i++)

  {

    if (str[n - 1 - i] != str[i])
    {

      return false;
    }
  }

  return true;
}

int main()
{
  string s = "N2 i&nJA?a& jnI2n";
  cout << checkPalindrome(s);
  return 0;
}