#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t!=0){
        int n,k,a[n],b[n];
        cin>>n>>k;
        for(int i=0;i<n;i++){
            cin>>b[i];
            if(b[i]<=k){ 
                a[i] = 1;
                k = k-b[i]; 
            }else{ 
                a[i] = 0; 
            }
        }
       for(int j=0;j<n;j++)
        {
            cout<<a[j];
        }
        cout<<"\n";
        t--;
    }
   return 0;
}
