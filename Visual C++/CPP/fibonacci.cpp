#include<iostream>
#include<math.h>
using namespace std;

void fib(int m){

    int t1 = 0;
    int t2 = 1;
    int t3;

    cout<<0<<endl;
    cout<<1<<endl;

    for(int i = 2; i < m; i++){
        t3 = t1 + t2;
        t1 = t2;
        t2 = t3;
        cout<<t3<<endl;
    }
}
int main(){

    int n;
    cin>>n;

    fib(n);

    return 0;
}