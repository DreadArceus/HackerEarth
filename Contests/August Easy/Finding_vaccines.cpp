#include <iostream>
#include <vector>
using namespace std;
int solve(vector<char> virus, vector<vector<char> > vaccines)
{
  int vG = 0, vC = 0;
  for(char c : virus)
  {
    if(c == 'G')
    {
      vG++;
    }
    else if(c == 'C')
    {
      vC++;
    }
  }
  int max = 0, k = -1;
  for(int i  = 0; i < vaccines.size(); i++)
  {
    int locG = 0, locC = 0;
    for(char c : vaccines[i])
    {
      if(c == 'G')
      {
        locG++;
      }
      else if(c == 'C')
      {
        locC++;
      }
    }
    if(locG * vC + locC * vG > max)
    {
      max = locG * vC + locC * vG;
      k = i;
    }
  }
  return k + 1;
}
int main()
{
  int n = 0, lv = 0;
  cin >> n >> lv;
  vector<char> virus(lv);
  for(int i = 0; i < virus.size(); i++)
  {
    cin >> virus[i];
  }
  vector<vector<char> > vaccines;
  while(n--)
  {
    int l = 0;
    cin >> l;
    vector<char> v(l);
    for(int i = 0; i < v.size(); i++)
    {
      cin >> v[i];
    }
    vaccines.push_back(v);
  }
  int ans = solve(virus, vaccines);
  cout << ans;
}
