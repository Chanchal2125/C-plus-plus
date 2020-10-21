#include<iostream>
using namespace std;

int main(){

    int n,a[100],even = 0,odd = 0;
    cin>>n;

    for(int i = 0; i < n; i++){
        cin>>a[i];
    }

    for(int i = 0; i < n; i++){
        if (a[i]%2 == 0){
            even = even + 1;
        }else{
            odd = odd + 1;
        }
    }
    if (even > odd){
        cout<<"READY FOR BATTLE"<<endl;
    }else{
        cout<<"NOT READY"<<endl;
    }

    return 0;
}