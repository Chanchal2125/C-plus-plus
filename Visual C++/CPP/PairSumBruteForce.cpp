#include <iostream>
using namespace std;

bool pairsum(int a[], int n, int k){
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if (a[i] + a[j] == k){
                return true;
            }
        }
    }
    return false;
}

int main(){

    int n,k;
    cin>>n>>k;

    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }

    cout<<pairsum(a,n,k);
    return 0;
}