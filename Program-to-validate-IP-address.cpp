#include <bits/stdc++.h>
using namespace std;

bool isValidIPv4(string ipAddress)
{
  // Splitting by "."
  vector<string> ipOctets;
  stringstream check1(ipAddress);
  string intermediate;
  while (getline(check1, intermediate, '.'))
  {
    ipOctets.push_back(intermediate);
  }

  // Checking for the corner cases
  // cout << ipOctets.size() << endl;
  if (ipOctets.size() != 4)
  {
    return false;
  }
  for (string str : ipOctets)
  {
    // cout << str << endl;
    if (str.length() > 3 || str.length() == 0)
    {
      return false;
    }
    if (str.length() > 1 && str[0] == '0')
    {
      return false;
    }
    for (char ch : str)
    {
      if (ch >= '0' && ch <= '9')
        continue;
      else
        return false;
    }
    if (stoi(str) >= 0 && stoi(str) <= 255)
      continue;
    else
      return false;
  }
  return true;
}

int main()
{
  string ip = "127.0.0.1";
  cout << isValidIPv4(ip) << endl;
  return 0;
}