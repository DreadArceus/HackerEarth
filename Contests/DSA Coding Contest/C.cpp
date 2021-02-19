#include <iostream>
#include <cmath>
using namespace std;
double fact(double n)
{
  double ans = 1;
  for(int i = 2; i <= n; i++)
  {
    ans *= i;
  }
  return ans;
}
// int modin(double x)
// {
//   return (int)x % 100000007;
// }
double func(double p, double q, double r)
{
  double ans = 0;
  for(int i = 0; i <= p; i++)
  {
    double temp = 0;
    for(int j = 1; j <= q; j++)
    {
      double ta = pow(r, i);              // where pow() is the power function
      double tb = (ta - 1) / ta;
      temp += pow(tb, j);
    }
    double temp2 = fact(p) / (fact(p - i) * fact(i)); // where fact() is the factorial function
    if(i&1)
    {
      ans -= temp * temp2;
    }
    else
    {
      ans += temp * temp2;
    }
  }
  return ans;
}
int main()
{
  int t = 0;
  cin >> t;
  while(t--)
  {
    int p = 0, q = 0, r = 0;
    cin >> p >> q >> r;
    double ans = (func(p, q, r));
    cout << ans << "\n";
  }

}
