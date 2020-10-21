#include<iostream>
using namespace std;

int main(){

    int n,temp,sum = 0,rem;
    cin>>n;
    temp = n;

    while(temp > 0){
        rem = temp % 10;
        sum = sum + rem*rem*rem;
        temp = temp / 10;
    }

    if (sum == n){
        cout<<"Armstrong Number";
    }else{
        cout<<"Not Armstrong Number";
    }
    
    return 0;
}