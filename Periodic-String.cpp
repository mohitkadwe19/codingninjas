#include <bits/stdc++.h>
using namespace std;

bool isPeriodic(string s)
{
  string temp = s + s;

  if (temp.substr(1, temp.size() - 2).find(s) != -1)
  {

    return true;
  }

  return false;
}

int main()
{
  string s = "xxxxxx";
  cout << isPeriodic(s) << endl;
}