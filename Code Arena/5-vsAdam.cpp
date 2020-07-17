//Logic is obvious but calculating probability is not, brb -16-July-2020
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double furtherRolls(int N, int M)
{
	int left = N - M;
	if(left == 0)
	{
		return 0;
	}
  double prob = pow(0.5, left) + (pow(0.5, left) * pow(2, 1 - N));
	return (2 * N - 1) * pow(prob, -1);
}
int main()
{
	int T = 0;
	cin >> T;
	while(T--)
	{
		int N = 0, M = 0;
		cin >> N >> M;
		double ans = furtherRolls(N, M);
		cout << fixed << setprecision(2) << ans << "\n";
	}
}
