#include<iostream>
using namespace std;


string sum(int a[], int n, int k){
    for(int i = 0; i < n; i++){
        for(int j = i+1; j <= n; j++){
            if (a[i] + a[j] == k){
                return "Yes";
            }
        }
    }
    return "No";
}

int main(){
    
    int t;
    cin>>t; 
    for(int i = 1; i <= t; i++){
    int n,k;
    cin>>n>>k;

    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }

    cout<<sum(a,n,k);
    }
    return 0;
}