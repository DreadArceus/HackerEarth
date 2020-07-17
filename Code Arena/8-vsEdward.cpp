#include <iostream>
#include <cmath>
using namespace std;
int reportWinner(int b, int g)
{
	int extras = abs(g - b);
	if(extras > 1)
	{
    cout << "Little Jhool wins!\n";
		return 0;
	}
	cout << "The teacher wins!\n";
	return 0;
}
int main()
{
	int t = 0;
	cin >> t;
	while(t--)
	{
		int n = 0, b = 0, g = 0;
		cin >> n >> b >> g;
		reportWinner(b, g);
	}
}
