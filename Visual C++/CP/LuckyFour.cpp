#include<iostream>
using namespace std;

int main(){

    int t,a[1000000],rem;
    cin>>t;
    for(int i = 0; i < t; i++){
        cin>>a[i];
    }
    for(int i = 0; i < t; i++){
        int count=0;
        while(a[i] > 0){
            rem = a[i] % 10;
            if(rem == 4){
                count = count + 1;
            }
            a[i] = a[i] / 10;
        }
        cout<<count<<endl;
    }
    return 0;
}