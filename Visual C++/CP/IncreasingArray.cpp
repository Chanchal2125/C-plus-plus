#include <iostream>
typedef long long ll;
using namespace std;

int main(){

    ll n,count = 0;
    cin>>n;

    ll a[n];
    for(ll i = 0; i < n; i++){
        cin>>a[i];
    }

    for(ll i = 1; i < n; i++){
        while(a[i] < a[i-1]){
            a[i] += 1;
            count += 1;
        }
    }

    cout<<count<<endl;
    return 0;
}