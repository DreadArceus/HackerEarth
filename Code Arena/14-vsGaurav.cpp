//When two tolls are equal, this logic does not work,
//thinking that a recursive function to choose the better path is needed
//brb -17-July-2020
#include <iostream>
#include <cmath>
using namespace std;
//bool recur(int t1[], int t2[], int i)
int minCost(int t1[], int t2[], int c1[], int c2[], int n)
{
	int m = min(t1[0], t2[0]);
	bool on1 = t1[0] < t2[0];
	for(int i = 1; i < n; i++)
	{
		if(on1)
		{
			if(t1[i] > t2[i] + c1[i - 1])
			{
				m += t2[i] + c1[i - 1];
				on1 = false;
			}
			else
			{
				m += t1[i];
			}
		}
		else
		{
			if(t2[i] > t1[i] + c2[i - 1])
			{
				m += t1[i] + c2[i - 1];
				on1 = true;
			}
			else
			{
				m += t2[i];
			}
		}
	}
	return m;
}
int main()
{
	int T = 0;
	cin >> T;
	while(T--)
	{
		int N = 0;
		cin >> N;
		int t1[N], t2[N];
		for(int i = 0; i < N; i++)
		{
			cin >> t1[i];
		}
		for(int i = 0; i < N; i++)
		{
			cin >> t2[i];
		}
		int ct1[N - 1], ct2[N - 1];
		for(int i = 0; i < N - 1; i++)
		{
			cin >> ct1[i];
		}
		for(int i = 0; i < N - 1; i++)
		{
			cin >> ct2[i];
		}
		int ans = minCost(t1, t2, ct1, ct2, N);
		cout << ans << "\n";
	}
}
