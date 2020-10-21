#include<iostream>
using namespace std;

int main(){
    int a,b,j,i;
    cin>>a>>b;
    for(j=a;j<=b;j++){
    for(i=2;i<j;i++){
        if(j%i==0){
            break;
        }
    }
    if (j == i){
        cout<<j<<endl;
    }
    }
    return 0;
}