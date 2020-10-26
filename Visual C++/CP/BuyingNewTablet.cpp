#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int No_of_shop;
        cin>>No_of_shop;
        int arr[No_of_shop]={0};
        int price; cin>>price;
        for(int i=0;i<No_of_shop;i++)
        {
            int w,h,p;
            cin>>w>>h>>p;
            if (p<=price)
            {
                arr[i]=w*h;
            }    
        }
        int m=INT_MIN;
        for (int j = 0; j < No_of_shop; j++)
        {
            m=max(m,arr[j]);
        }
        if(m)
            cout<<m<<endl;
        else
            cout<<"no tablet"<<endl;

    }
    return 0;
}