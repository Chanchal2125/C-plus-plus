#include<iostream>
using namespace std;

int main(){

    int rounds,a[100000],b[100000],asum=0,bsum=0,diff;
    cin>>rounds;

    for(int i = 0; i < rounds; i++){
        cin>>a[i]>>b[i];
    }
    for(int i = 0; i < rounds; i++){
        cout<<a[i]<<" "<<b[i]<<endl;
    }
    for(int j = 0; j < rounds; j++){
        asum = asum + a[j];
        bsum = bsum + b[j];
    }
    if (asum > bsum){
        diff = a[0];
        for (int m = 0; m < rounds; m++){
            if (a[m] - b[m] > diff){
                diff = a[m] - b[m];
            }
        }
        cout<<"1"<<" "<<diff<<endl;
    }else{
        diff = b[0];
        for (int m = 0; m < rounds; m++){
            if (b[m] - a[m] > diff){
                diff = b[m] - a[m];
            }
        }
        cout<<"2"<<" "<<diff<<endl;
    }
    return 0;
}