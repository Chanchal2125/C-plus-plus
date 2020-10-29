#include<iostream>
using namespace std;

int main(){

    int l,b,area,peri;
    cin>>l;
    cin>>b;
    area = l * b;
    peri = 2*(l+b);
    if (area > peri){
        cout<<"Area"<<endl;
        cout<<area<<" ";
    }
    else if (area < peri){
        cout<<"Peri"<<endl;
        cout<<peri<<" ";
    }
    else{
        cout<<"Eq"<<endl;
        cout<<peri<<" ";
    }

    return 0;
}