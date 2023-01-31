#include <bits/stdc++.h>
using namespace std;

string convertString(string str)
{
  // convert string to first letter capital
  str[0] = toupper(str[0]);
  for (int i = 1; i < str.length(); i++)
  {
    if (str[i] == ' ')
    {
      str[i + 1] = toupper(str[i + 1]);
    }
  }
  return str;
}

int main()
{
  string str = "good to see you";
  cout << convertString(str) << endl;
  return 0;
}