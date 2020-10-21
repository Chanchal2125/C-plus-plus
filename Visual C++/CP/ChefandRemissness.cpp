#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int t,a,b;
    cin>>t;
    for (int i = 1; i <= t; i++){
        cin>>a>>b;
        cout<<max(a,b)<<" "<<a+b<<endl;
    }
    

    return 0;
}