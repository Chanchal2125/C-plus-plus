#include<iostream>
using namespace std;

int main(){

    long n,a[n];
    cin>>n;
    for(int i = 0; i < n-1; i++){
        cin>>a[i];
    }
    for(int i = 0; i <= n; i++){
        for(int j = 1; j <= n; j++){
        if (a[i] != j ){
            cout<<j;
            break;
        }
        }
    }
    return 0;
}