#include<iostream>
using namespace std;

int main(){

    int W;
    float B,rem;
    cin>>W>>B;
    if (W%5 != 0){
        cout<<B<<endl;
    }
    else if (W%5 == 0 && B > W + 0.5){
        rem = B - W;
        rem = rem - 0.5;
        cout<<rem<<endl;
    }else{
        cout<<B<<endl;
    }
    return 0;
}