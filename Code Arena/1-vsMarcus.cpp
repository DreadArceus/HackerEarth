#include <iostream>
using namespace std;
int main()
{
	int N, Q;
	cin >> N >> Q;
	int grid[N][N];
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			cin >> grid[i][j];
		}
	}
	while(Q--)
	{
		int T, x1, y1, x2, y2, cnt = 0;
		char C;
		cin >> T >> x1 >> y1 >> x2 >> y2 >> C;
		for(int i = x1; i <= x2; i++)
		{
			for(int j = y1; j <= y2; j++)
			{
				int tPeriods = T/grid[i-1][j-1];
        if((tPeriods % 3 == 0 && C == 'R')
					||(tPeriods % 3 == 1 && C == 'G')
					||(tPeriods % 3 == 2 && C == 'B'))
				{
					cnt++;
				}
			}
		}
		cout << cnt << "\n";
	}
}
