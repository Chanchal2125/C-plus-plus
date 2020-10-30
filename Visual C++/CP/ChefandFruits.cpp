#include<iostream>
#include<bits/stdc++.h>
# define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main()
{
    fast_io;
    int t;
    cin>>t;
    
    while(t--)
    {
        int a,o,g;
        cin>>a>>o>>g;
        if(a==o)
            cout<<"0"<<endl;
        else
        {
            while((a!=o) && g>0)
            {
                if(a>o)
                {o++; g--;}
                if(o>a)
                {a++; g--;}
            }
            cout<<abs(a-o)<<endl;
        }
    }
}
