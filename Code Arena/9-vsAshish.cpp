//Cheesed graph question, be back when i know graphs and trees -16-July-2020
#include <iostream>
using namespace std;
int main()
{
	int N = 0;
	cin >> N;
	int deg[N];
	for(int i = 0; i < N; i++)
	{
		cin >> deg[i];
	}
	for(int i = 0; i < N; i++)
	{
		if(deg[i] > 3)
		{
			cout << "No";
			return 0;
		}
	}
	cout << "Yes";
}
