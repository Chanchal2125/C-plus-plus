#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;

    for(int i = 1; i <= t; i++){
        int year;
        cin>>year;

        if(year == 2010 || year == 2015 || year == 2016 || year == 2017 || year == 2019){
            cout<<"HOSTED"<<endl;
        }else{
            cout<<"NOT HOSTED"<<endl;
        }
    }

    return 0;
}