//TLE makes sense but Wrong answers on some test cases? This maybe the third instance of long long overflow.
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
long long LCM(vector<int> v)
{
  long long max = 0;
  for(int i = 0; i < v.size(); i++)
  {
    if(v[i] > max)
    {
      max = v[i];
    }
  }
  bool check = true;
  for(long long j = max; ; j += max)
  {
    for(int i = 0; i < v.size(); i++)
    {
      if(j % v[i] != 0)
      {
        check = false;
        break;
      }
    }
    if(!check)
    {
      check = true;
      continue;
    }
    return j;
  }
}
int main()
{
  int t = 0;
  cin >> t;
  while(t--)
  {
    int N = 0, M = 0, K = 0;
    cin >> N >> M >> K;
    vector<int> a(N);
    for(int i = 0; i < N; i++)
    {
      cin >> a[i];
      a[i] = pow(a[i], K);
    }
    long long l = LCM(a);
    cout << l % M;
  }
}
