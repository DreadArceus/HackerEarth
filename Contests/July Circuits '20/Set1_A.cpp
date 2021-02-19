#include <iostream>
using namespace std;
long long solve(long long N)
{
  return 1 + ((N + 1) * N) / 2;
}
int main()
{
  int t = 0;
  cin >> t;
  while(t--)
  {
    long long N = 0;
    cin >> N;
    long long pieces = solve(N);
    cout << pieces << "\n";
  }
}
