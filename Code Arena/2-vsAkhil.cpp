//Nested for loop atleast worked, recursion is not even properly functional yet.
//massive fail, recursion and nested for loop are both only maximising the next move and not the full path, brb-15-July-2020
#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
using namespace std;
double recur(double h, int x, vector<vector<int> > a)
{
	if(x < a.size() - 1)
	{
		double hInc = 0;
		for(int j = x + 1; j < a.size(); j++)
		{
			double dis = pow((pow(a[x][0]-a[j][0], 2) + pow(a[x][0]-a[j][1], 2)), 0.5);
			double locHInc = double(a[j][2]) - dis;
			if(locHInc > hInc)
			{
				hInc = locHInc;
				x = j;
			}
		}
    if(hInc == 0)
    {
      return h;
    }
		recur(h + hInc, x, a);
	}
	else
	{
		return h;
	}
}
int main()
{
	int n;
	cin >> n;
	vector<vector<int> > a(n);
	for(int i = 0; i < n; i++)
	{
    a[i].push_back(0);
    a[i].push_back(0);
    a[i].push_back(0);
		cin >> a[i][0] >> a[i][1] >> a[i][2];
	}
	double maxH = recur(a[0][2], 0, a);
	cout << fixed << setprecision(6) << maxH;
}
