//Recursion expertise needed, current logic is perfect but takes too much memory
//brb -23-July-2020
#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<int> digitConverter(int num, int len)
{
	vector<int> digits(len);
	string x = to_string(num);
	for(int i = 0; i < len; i++)
	{
		digits[i] = x[i] - '0';
	}
	return digits;
}
int recurMin(int digit, int cost[])
{
  int base = cost[digit];
  for(int j = digit + 1; j <= 9; j++)
  {
    int x = recurMin(j, cost) + recurMin(10 - j + digit, cost);
    if(x < base)
    {
      base = x;
    }
  }
  for(int j = 1; j <= digit/2; j++)
  {
    int x = recurMin(j, cost) + recurMin(digit - j, cost);
    if(x < base)
    {
      base = x;
    }
  }
  return base;
}
int minCost(vector<int> digits, int cost[])
{
	int c = 0;
  for(int i = 0; i < digits.size(); i++)
  {
    c += recurMin(digits[i], cost);
  }
	return c;
}
int main()
{
	int t = 0;
	cin >> t;
	while(t--)
	{
		int cost[10];
		for(int i = 0; i < 10; i++)
		{
			cin >> cost[i];
		}
		int len = 0, num = 0;
		cin >> len >> num;
		int ans = minCost(digitConverter(num, len), cost);
		cout << ans << "\n";
	}
}
