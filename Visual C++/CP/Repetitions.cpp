#include <iostream>
#include <string.h>
using namespace std;

int main(){

    string a;
    cin>>a;
    
    char counter = a[0];
    int count = 1,mx = 1;
    for(int i = 1; i < a.length(); i++){
        if (a[i] == counter){
            count += 1;
        }
        else{
            counter = a[i];
            count = 1;
        }
        mx = max(count,mx);
    }

    cout<<mx<<endl;
    return 0;
}