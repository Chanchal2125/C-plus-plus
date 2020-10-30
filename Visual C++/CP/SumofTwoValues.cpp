#include <iostream>
using namespace std;

int main(){

    int n,t,a[n];
    cin>>n>>t;

    for(int i = 0; i < n; i++){
        cin>>a[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i != j){
            if (a[i] + a[j] == t){
                cout<<a[i]<<" "<<a[j];
                break;
            }
            }
        }
    }
    return 0;
}