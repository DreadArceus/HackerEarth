#include <iostream>
#include <cmath>
using namespace std;
//be back with recursion -16-July-2020
int recur(int x, int y)
{
	if(x > 0 && y > 0)
	{
		recur(x - 1, recur(x, y - 1));
	}
  if(x > 0 && y == 0)
	{
		recur(x - 1, 1);
	}
	return y + 1;
}
int main()
{
	int X = 0, Y = 0;
	cin >> X >> Y;
	int a = recur(X, Y);

	int digits[3];
	for(int i = 0; i < 3; i++)
	{
		digits[i] = a % (int)pow(10, i + 1);
	}
	digits[2] -= digits[1];
	digits[1] -= digits[0];

  cout << a << "\n";
	cout << digits[2]/100 << digits[1]/10 << digits[0];
}
