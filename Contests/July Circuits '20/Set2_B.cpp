//Incomplete logic
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool byS(vector<int> v1, vector<int> v2)
{
  return v1[0] < v2[0];
}
vector<int> kMaxOrdered(vector<int> v, int k)
{
  vector<vector<int> > kMax;
  for(int j = 0; j < k; j++)
  {
    int s = 0;
    for(int i = 0; i < v.size(); i++)
    {
      if(v[i] > v[s])
      {
        s = i;
      }
    }
    vector<int> entry(2);
    entry[0] = s;
    entry[1] = v[s];
    kMax.push_back(entry);
    v[s] = -1;
  }
  sort(kMax.begin(), kMax.end(), byS);
  vector<int> ans;
  for(int i = 0; i < k; i++)
  {
    ans.push_back(kMax[i][1]);
  }
  return ans;
}
int weirdSum(vector<int> v, int m)
{
  int sum = 0;
  for(int i = 0; i < v.size(); i++)
  {
    sum += v[i] * ((i+1) % m);
  }
  return sum;
}
int solve(vector<int> v, int k, int m)
{
  vector<int> maxV = kMaxOrdered(v, k);
  return weirdSum(maxV, m);
}
int main()
{
  int N = 0, M = 0, K = 0;
  cin >> N >> K >> M;
  vector<int> a(N);
  for(int i = 0; i < a.size(); i++)
  {
    cin >> a[i];
  }
  int ans = solve(a, K, M);
  cout << ans;
}
