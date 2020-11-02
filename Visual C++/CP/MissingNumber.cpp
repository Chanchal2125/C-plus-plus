#include <iostream>
typedef long long ll;
using namespace std;

int main(){

    ll n,a,sum = 0,max;
    cin>>n;

    for(ll i = 0; i < n-1; i++){
        cin>>a;
        sum = sum + a;
    }
    max = n*(n+1)/2;
    cout<<max-sum<<endl;
    return 0;
}