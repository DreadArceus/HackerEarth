//Incomplete logic (Tests passed: 2/10) brb -16-July-2020
#include <iostream>
using namespace std;
int maximize(int a[], int b[], int w, int n)
{
	int mV = 0;
	for(int i = 0; i < n; i++)
	{
		for(int x = 1; x < n; x++)
		{
			int locMV = 0, locW = 0;
			for(int j = i; j < n; j += x)
			{
				locW += a[j];
				if(locW > w)
				{
					break;
				}
				locMV += b[j];
			}
			if(locMV > mV)
			{
				mV = locMV;
			}
		}
	}
	return mV;
}
int main()
{
	int T = 0;
	cin >> T;
	while(T--)
	{
		int N = 0, W = 0;
		cin >> N >> W;
		int iW[N], iV[N];
		for(int i = 0; i < N; i++)
		{
			cin >> iW[i];
		}
		for(int i = 0; i < N; i++)
		{
			cin >> iV[i];
		}
		int ans = maximize(iW, iV, W, N);
		cout << ans << "\n";
	}
}
