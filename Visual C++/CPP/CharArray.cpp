#include <iostream>
using namespace std;

int main(){

    char a[100] = "Chanchal";
    int i = 0;

    while(a[i] != '\0'){
        cout<<a[i]<<endl;
        i++; 
    }

    return 0;
}