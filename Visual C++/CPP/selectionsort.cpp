#include<iostream>
using namespace std;

int main(){
    //Size of array as input
    int n;
    cin>>n;
    //Accessing elements of array
    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    //Sorting using selection
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if (a[j] < a[i]){
                int temp;
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }

    return 0;
}