#include<iostream>
using namespace std;

int main(){

    int t,a,b,c;
    cin>>t;
   for(int i = 1; i <= t; i++){
        cin>>a>>b>>c;
    if(a > b && a > c){
        if(b > c){
            cout<<b<<endl;
        }else{
            cout<<c<<endl;
        }
    }
    else if(b > c && b > a){
        if(c > a){
            cout<<c<<endl;
        }else{
            cout<<a<<endl;
        }
    }
    else if(c > a && c > b) {
        if(a > b){
            cout<<a<<endl;
        }else{
            cout<<b<<endl;
        }
    }
    else{
        break;
    }
}
    return 0;
}