#include <iostream>
#include <algorithm>
using namespace std;
int maxUnique(int a[], int n)
{
	sort(a, a + n);
	if(a[n-1] > a[n - 2])
	{
		return a[n-1];
	}
	for(int i = n - 2; i > 0; i++)
	{
		if(a[i] > a[i-1] && a[i] < a[i + 1])
		{
			return a[i];
		}
	}
	if(a[0] < a[1])
	{
		return a[0];
	}
	return -1;
}
int main()
{
	int N = 0;
	cin >> N;
	int a[N];
	for(int i = 0; i < N; i++)
	{
		cin >> a[i];
	}
	int ans = 0;
	ans = maxUnique(a, N);
	cout << ans;
}
