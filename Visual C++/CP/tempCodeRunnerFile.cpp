#include<iostream>
using namespace std;

int main(){

    int t,a,b,c;
    cin>>t;

    for(int i = 1; i <= t; i++){
        cin>>a>>b>>c;
        if (a+b+c == 180){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
    }

    return 0;
}