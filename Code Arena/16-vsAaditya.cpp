//TLE
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int findMax(int a[], int n)
{
  int x = 0;
  for(int i = 0; i < n; i++)
	{
		if(a[i] > x)
		{
			x = a[i];
		}
	}
  return x;
}
vector<int> primeLister(int limit)
{
  vector<int> primes;
  primes.push_back(2);
	bool prime = true;
	for(int i = 3; i <= limit; i++)
	{
		for(int j = 0; j < primes.size(); j++)
		{
			if(i % primes[j] == 0)
			{
				prime = false;
			}
		}
		if(prime)
		{
			primes.push_back(i);
		}
		prime = true;
	}
  return primes;
}
int primeSum(int a[], int n, int k)
{
	int max = findMax(a, n);
	vector<int> primes = primeLister(max);
	int cnt = 0, sum = 0;
	for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < primes.size(); j++)
    {
      if(a[i] == primes[j])
      {
        cnt++;
        break;
      }
    }
    if(cnt == k)
    {
      sum += a[i];
      cnt = 0;
    }
  }
	return sum;
}
int main()
{
	int T = 0;
	cin >> T;
	while(T--)
	{
		int N = 0, K = 0;
		cin >> N  >> K;
		int a[N];
		for (int i = 0; i < N; i++)
		{
			cin >> a[i];
		}
		int sum = primeSum(a, N, K);
		cout << sum << "\n";
	}
}
