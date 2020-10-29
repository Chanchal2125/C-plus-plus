#include<bits/stdc++.h>
using namespace std;

int main()
{
  int T;
  cin>>T;
  while(T--)
  {
    vector<int> v;
    while(1)
    {
      int a;
      cin>>a;
      v.push_back(a);
      char c = getchar();
      if(c != ' ') break;
    }
    sort(v.begin(), v.end());
    int n = v.size() - 1;
    if(v[n] != n) cout<<v[n]<<endl;
    else cout<<v[n-1]<<endl;
  }
}