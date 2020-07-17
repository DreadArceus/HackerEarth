//Need a bigger data type than long long -16-July-2020
#include <iostream>
#include <cmath>
using namespace std;
int countPali(long long n)
{
	long long cnt = 0;
	if(n == 1)
	{
		return 26;
	}
	if(n % 2 == 0)
	{
		cnt = (long long)pow(26, n/2) % (long long)(pow(10, 9) + 9);
	}
	else
	{
		cnt = (long long)pow(26, (n-1)/2 + 1) % (long long)(pow(10, 9) + 9);
	}
	return cnt;
}
int main()
{
	int T = 0;
	cin >> T;
	while(T--)
	{
		long long N = 0;
		cin >> N;
		int ans = countPali(N);
		cout << ans << "\n";
	}
}
