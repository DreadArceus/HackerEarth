//TLE, probably gotta find i without a loop
#include <iostream>
#include <vector>
using namespace std;
int solve(vector<int> v, int x)
{
  int max = 0;
  for(int i = 1; i <= v.size(); i++)
  {
    if((i & x) == 0 && max < v[x-1] + v[i-1])
    {
      max = v[x-1] + v[i-1];
    }
  }
  return max ? max : -1;
}
int main()
{
  int T = 0;
  cin >> T;
  while(T--)
  {
    int n = 0, q = 0;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
      cin >> v[i];
    }
    cin >> q;
    while(q--)
    {
      int x = 0;
      cin >> x;
      int ans = solve(v, x);
      cout << ans;
    }
  }
}
