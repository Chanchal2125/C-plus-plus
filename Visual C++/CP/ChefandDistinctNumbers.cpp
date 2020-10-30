#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
    cin >> t;
    while(t--)
    {
        int n;
        bool flag=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
            
        sort(a, a+n);
        for(int i=1;i<n;i++)
        {
            if(a[i]==a[i-1])
            {
                flag=1;
                break;
            }
        }
            
        cout<<((flag)?"Yes\n":"No\n");
    }
    return 0;
}