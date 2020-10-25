#include<iostream>
using namespace std;


void sum(int t){
    int sum = 0;
    for(int i = 1; i <= t; i++){
        sum = sum + i;
    }
    cout<<sum;
}

int main(){

    int n;
    cin>>n;

    sum(n);
}