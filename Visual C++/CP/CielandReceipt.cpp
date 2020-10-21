#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    int p, num_dishes, x;
    
    for(int i=1; i<=t; i++)
    {
        num_dishes = 0;
         cin >> p;
         
         for(int j=1; j<=12; j++)
         {
             x = pow(2,12-j);
             num_dishes += p/x;
             p = p%x;
         }
         
         cout << num_dishes << endl;
         
    }
   
}