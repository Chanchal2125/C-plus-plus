#include<iostream>
using namespace std;

int main(){

    long int n,t;
    cin>>t;
    for(long int i = 1; i <= t; i++){
        cin>>n;
        long int count = 0;
    for(long int i = 1; i <= n; i++){
        if (n%i == 0){
            count += 1;
        }
    }
    cout<<count<<endl;
    }
    return 0;
}