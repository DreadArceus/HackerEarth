//got rekt too fast to check test cases
#include <iostream>
using namespace std;
int maxCoins(int a[], int n, int K)
{
  int max = 0;
  for(int i = 0; i < n; i++)
  {
    int localCoins = 0;
    for(int j = i; j < n; j++)
    {
      if(a[i] <= K)
      {
        localCoins += a[i];
      }
      else
      {
        break;
      }
    }
    if(localCoins > max)
    {
      max = localCoins;
    }
  }
  return max;
}
int main()
{
	int T = 0;
	cin >> T;
	while(T--)
	{
		int N = 0, K = 0;
		cin >> N >> K;
		int coins[N];
		for(int i = 0; i < N; i++)
		{
      cin >> coins[i];
		}
    int ans = maxCoins(coins, N, K);
    cout << ans << "\n";
	}
}
