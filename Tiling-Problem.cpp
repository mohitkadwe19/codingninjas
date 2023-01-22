#include <bits/stdc++.h>
using namespace std;
#define ll long long

int md = 1e9 + 7;

vector<vector<ll>> multiply(vector<vector<ll>> &mat, vector<vector<ll>> &nums)
{

  int n1 = mat.size(), n2 = nums.size();

  int m1 = mat[0].size(), m2 = nums[0].size();

  vector<vector<ll>> ans(n1, vector<ll>(m2, 0));

  for (int i = 0; i < n1; i++)
  {
    for (int j = 0; j < m2; j++)
    {
      for (int k = 0; k < n2; k++)
      {

        ans[i][j] = (ans[i][j] % md + (mat[i][k] * nums[k][j]) % md) % md;
      }
    }
  }

  return ans;
}

vector<vector<ll>> matrixExp(vector<vector<ll>> &mat, ll sz)
{

  if (sz == 0)
  {

    vector<vector<ll>> ans(2, vector<ll>(2, 0));

    for (int i = 0; i < 2; i++)
    {
      ans[i][i] = 1;
    }

    return ans;
  }

  if (sz == 1)
  {
    return mat;
  }

  vector<vector<ll>> tmp = matrixExp(mat, sz / 2);

  tmp = multiply(tmp, tmp);

  if (sz % 2 != 0)
  {
    tmp = multiply(tmp, mat);
  }

  return tmp;
}

int numberOfWaysToTile(long long n)
{

  vector<vector<ll>> mat(2, vector<ll>(2, 1));

  mat[1][1] = 0;

  vector<vector<ll>> ans = matrixExp(mat, n - 1);

  vector<vector<ll>> nums(2, vector<ll>(1, 1));

  vector<vector<ll>> fin = multiply(ans, nums);

  return fin[0][0];
}

int main()
{
  long long tiles = 4;
  cout << numberOfWaysToTile(tiles) << endl;
  return 0;
}