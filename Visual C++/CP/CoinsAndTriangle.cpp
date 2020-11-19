#include<iostream>
#include <math.h>
using namespace std;

int main() {
int t,i;
cin>>t;
if(t>100) goto ends;
for(i=0;i<t;i++)
{ 
    long int N,j,ctr;
    long long int sum=0;
    ctr=0;
    sum=0;
    cin>>N;
    ctr= (-1+sqrt(1+8*N))/2;
    cout<<ctr<<"\n";
}
ends:
return 0;
}