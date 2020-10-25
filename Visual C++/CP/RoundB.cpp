#include<iostream>
using namespace std;

int main(){

    int t,n,a[100000];
    cin>>t;
    for(int i = 1; i <= t; i++){
        cin>>n;
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
        int count = 0;
        for(int i = 1; i < n-1; i++){
            if (a[i-1] < a[i] && a[i] > a[i+1]){
                count = count + 1;
            }
        }
        cout<<"Case # "<<i<<": "<<count<<endl;
    }
}