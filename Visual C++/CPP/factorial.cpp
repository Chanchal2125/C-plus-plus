#include<iostream>
#include<math.h>
using namespace std;

void fact(int n){

    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact = fact * i;
    }
    cout<<fact<<endl;
}

int main(){

    int n;
    cin>>n;

    fact(n);
}