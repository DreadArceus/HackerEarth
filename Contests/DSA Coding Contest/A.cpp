#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int solve(vector<int> v)
{
  int x = 0, n = v.size();
  for(int i = 0; i <= floor(n/2); i++)
  {
    int loc = 1;
    for(int j = i; j <= i + n/2 - 1; j++)
    {
      loc *= v[j];
    }
    x += loc;
  }
  return x;
}
int main()
{
  int n = 0;
  cin >> n;
  vector<int> v(n);
  for(int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  int ans = solve(v);
  cout << ans;
}
