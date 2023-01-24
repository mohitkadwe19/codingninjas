#include <bits/stdc++.h>
using namespace std;

bool wildcardMatching(string pattern, string text)
{
  int n = pattern.length(), m = text.length();
  bool dp[n + 1][m + 1];
  memset(dp, false, sizeof(dp));
  dp[0][0] = true;
  for (int i = 1; i <= n; i++)
  {
    if (pattern[i - 1] == '*')
    {
      dp[i][0] = dp[i - 1][0];
    }
  }
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= m; j++)
    {
      if (pattern[i - 1] == '*')
      {
        dp[i][j] = dp[i - 1][j] || dp[i][j - 1];
      }
      else if (pattern[i - 1] == '?' || pattern[i - 1] == text[j - 1])
      {
        dp[i][j] = dp[i - 1][j - 1];
      }
      else
      {
        dp[i][j] = false;
      }
    }
  }
  return dp[n][m];
}

int main()
{
  string pattern = "ab?d", text = "abcc";
  cout << (wildcardMatching(pattern, text) ? "true" : "false");
  return 0;
}