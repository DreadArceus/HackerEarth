//Some test cases failed, no idea why -16-July-2020
#include <iostream>
using namespace std;
bool inverse(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		if(i + 1 != a[i])
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int T = 0;
	cin >> T;
	while(T--)
	{
		int n = 0;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		if(inverse(a, n))
		{
			cout << "inverse\n";
		}
		else
		{
			cout << "not inverse\n";
		}
	}
}
