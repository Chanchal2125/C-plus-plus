#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int total = 0;
    for (int i = 5; n / i >= 1; i *= 5)
    {
        total += n / i;
    }
    cout << total;
    return 0;
}


/*#include <iostream>
typedef long long ll;
using namespace std;

int main(){

    ll n;
    cin>>n;

    ll fact = 1;
    for(int i = 1; i <= n; i++){
        fact = fact * i;
    }

    ll count = 0;
    while(fact % 10 == 0){
        fact = fact / 10;
        count += 1;
    }
    cout<<count<<" ";
    return 0;
}*/