//Too slow for some test cases, presumably. brb -17-July-2020
#include <iostream>
#include <cmath>
using namespace std;
int maxMembers(int m, int n)
{
	int k = 0;
  //This would be used for maximum groups
  //k += ceil(double(m/2));
	//k += ceil(double(n/2));
  for(int i = min(m, n); i > 1; i--) //basically HCF
	{
		if(m % i == 0 && n % i == 0)
		{
			k = i;
			break;
		}
	}
	return k;
}
int main()
{
	int T = 0;
	cin >> T;
	while(T--)
	{
		int M = 0, N = 0;
		cin >> M >> N;
		int ans = maxMembers(M, N);
		cout << ans << "\n";
	}
}
