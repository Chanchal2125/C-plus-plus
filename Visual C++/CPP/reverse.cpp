#include<iostream>
using namespace std;

int main(){

    int n,temp,rem;
    cin>>n;
    temp = n;
    int result = 0;

    while(temp > 0){
        rem = temp % 10;
        result = result*10 + rem;
        temp = temp / 10;
    }

    cout<<result;
    
    return 0;
}