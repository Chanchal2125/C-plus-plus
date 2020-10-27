#include<iostream>
#define ll long long
using namespace std;
int main(){
  ios::sync_with_stdio(false),cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    ll n,k,j;
    ll days=-1,left=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
      cin>>j;
      j+=left;
      if(days==-1&&j<k)
         days=i;
      left=j>k?j-k:0;
    }
    if(days==-1)
      days=n+1+left/k;
    cout<<days<<"\n";
  }
  return 0;
}
