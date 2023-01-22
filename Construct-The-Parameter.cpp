#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> construct(vector<vector<int>> Points)
{
  vector<vector<int>> ans;
  int n = Points.size();
  int x = Points[0][0];
  int y = Points[0][1];
  for (int i = 1; i < n; i++)
  {
    int x1 = Points[i][0];
    int y1 = Points[i][1];
    if (x != x1)
    {
      if (x < x1)
      {
        ans.push_back({x, y, x1, y, 1});
        ans.push_back({x1, y, x1, y1, 1});
      }
      else
      {
        ans.push_back({x, y, x1, y, 2});
        ans.push_back({x1, y, x1, y1, 2});
      }
    }
    else
    {
      if (y < y1)
      {
        ans.push_back({x, y, x, y1, 1});
        ans.push_back({x, y1, x1, y1, 1});
      }
      else
      {
        ans.push_back({x, y, x, y1, 2});
        ans.push_back({x, y1, x1, y1, 2});
      }
    }
    x = x1;
    y = y1;
  }
  return ans;
}

int main()
{
  int n;
  cin >> n;
  vector<vector<int>> Points(n, vector<int>(2));
  for (int i = 0; i < n; i++)
  {
    cin >> Points[i][0] >> Points[i][1];
  }
  vector<vector<int>> ans = construct(Points);
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i][0] << " " << ans[i][1] << endl;
  }
  return 0;
}