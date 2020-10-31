#include<iostream>
using namespace std;

int andor(int n){
    for(int i = 1; i < 100; i++){
        for(int j = 1; j < 100; j++){
            if ((i & j) + (i | j) == n){
                return (i,j);
            }
        }
    }
    return -1;
}

int main(){
    int n,t,x,y;
    cin>>t;
    for(int i = 1; i <= t; i++){
    cin>>n;
    x,y = andor(n);
    cout<<x<<" "<<y;
    }
}