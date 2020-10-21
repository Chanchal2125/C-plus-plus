#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int b;
        cin>>b;
        int aot;
        if(b%2==0){
            aot = (0.5*b*b);
            cout<<(aot-b)/4<<endl;
        }
        else{
            b -= 1;
            aot = (0.5*b*b);
            cout<<(aot-b)/4<<endl;
        }
    }
    return 0;
}