//Need faster approach -16-July-2020
#include <iostream>
using namespace std;
int findNum(int n, int a[], int k, int p)
{
	for(int i = 1; i <= n; i++)
	{
		int cnt = i;
		for(int j = 0; j < k; j++)
		{
			if(i > a[j])
			{
				cnt -= 1;
			}
			else if(i == a[j])
			{
				cnt = -1;
			}
		}
		if(cnt == p)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int T = 0;
	cin >> T;
	while(T--)
	{
		int N = 0, K = 0, P = 0;
		scanf("%i%i%i", &N, &K, &P);
		int a[K];
		for(int i = 0; i < K; i++)
		{
			scanf("%i", &a[i]);
		}
		int ans = findNum(N, a, K, P);
		cout << ans << "\n";
	}
}
