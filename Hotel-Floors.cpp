#include <bits/stdc++.h>
using namespace std;

int hotelBookings(vector<string> queries)
{
  int n = queries.size();
  int count = 0;
  int max = 0;
  for (int i = 0; i < n; i++)
  {
    if (queries[i][0] == '+')
    {
      count++;
      if (count > max)
      {
        max = count;
      }
    }
  }
  return max;
}

int main()
{
  int n = 6;
  vector<string> queries = {"+1A", "+3E", "-1A", "+4F", "+1A", "-3E"};
  cout << hotelBookings(queries);
  return 0;
}