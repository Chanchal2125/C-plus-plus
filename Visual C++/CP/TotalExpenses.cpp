#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    int t;
    double p,q,sum;
    cin>>t;
    
    for(int i=0;i<t;i++){
        cin>>q>>p;
        sum=q*p;
        if(q>1000){
            sum=sum*(0.9);
        }
        cout<<fixed<<setprecision(7)<<sum<<endl;
    }
	return 0;
}