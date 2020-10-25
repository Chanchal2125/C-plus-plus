#include<iostream>
using namespace std;


int main(){

    int t,a,b,s[10000];
    cin>>t;
    for(int i = 1; i <= t; i++){
        cin>>a>>b;
        for(int i = 0; i < a; i++){
            cin>>s[i];
        }
        int count = 0;
        for(int i = 0; i < a; i++){
            if(s[i] <= b){
                b = b - s[i];
                count = count + 1;
            }
        }
        cout<<"Case #"<<i<<": "<<count<<endl;
    }

}
