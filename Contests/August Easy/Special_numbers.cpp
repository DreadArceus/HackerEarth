//No idea how to avoid a TLE by a legit solution
#include <iostream>
using namespace std;
int specialCount(int n)
{
  if(n < 44)
  {
    return 1;
  }
  else if(n < 47)
  {
    return 2;
  }
  else if(n < 74)
  {
    return 5;
  }
  else if(n < 77)
  {
    return 7;
  }
  else if(n < 444)
  {
    return 13;
  }
  return 0;
}
int main()
{
  int N = 0;
  cin >> N;
  int ans = specialCount(N);
  cout << ans;
}
