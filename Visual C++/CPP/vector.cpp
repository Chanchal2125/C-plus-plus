# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;


bool f(int x,int y){
    return x > y;
}
int main(){
    cout<< "Hello World" << endl;
    vector <int> A = {1,4,2,3};
    int length = sizeof(A)/sizeof(A[0]);
    sort(A.begin(),A.end());
    A.push_back(4);
    A.push_back(56);
    A.push_back(78);
    A.push_back(89);
    for(int i=0;i<A.size();i++){
            cout<< A[i] << endl;
    }
    vector <int> :: iterator it = lower_bound(A.begin(),A.end(), 4);
    vector <int> :: iterator it2 = upper_bound(A.begin(),A.end(), 4);
    cout<< *it << endl << *it2 << endl;
    cout<< it2-it << endl;
    cout<< endl;
    sort(A.rbegin(),A.rend());
    for(int x:A){
        cout << x << endl;
    }
    return 0;
}