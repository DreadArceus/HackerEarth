//Partially accepted (30/100), can't figure out the permutation.
#include <iostream>
#include <vector>
using namespace std;
vector<int> primeFactors(int n)
{
  vector<int> f;
  while(n % 2 == 0)
  {
    n /= 2;
    f.push_back(2);
  }
  for(int i = 3; i < 100; i++)
  {
    while(n % i == 0)
    {
      n /= i;
      f.push_back(i);
    }
  }
  return f;
}
int permutation(vector<int> v)
{
  int ans = 1;
  for(int i = 2; i <= v.size(); i++)
  {
    ans *= i;
  }
  return ans;
}
int solve(int n)
{
  vector<int> f = primeFactors(n);
  // if(n < 10)
  // {
  //   return permutation(f) + 1;
  // }
  return permutation(f);
}
int main()
{
  int n = 0;
  cin >> n;
  int ans = solve(n);
  cout << ans;
}
