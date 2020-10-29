#include<iostream>
using namespace std;

int main(){

    int n,rem,result,count=0;
    cin>>n;

    while(n > 0){
        n = n / 10;
        count += 1;
    }
    if (count == 1){
        cout<<"1";
    }
    else if (count == 2){
        cout<<"2";
    }
    else if (count == 3){
        cout<<"3";
    }
    else{
        cout<<"More than 3 digits";
    }
    return 0;
}