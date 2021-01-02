#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <climits>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
#define ll             long long int
#define ld             long double
#define mod            1000000007
#define endl           "\n"
#define vi             vector<ll>
#define vs             vector<string>
#define pii            pair<ll, ll>
#define ump            unordered_map
#define mp             map
#define pq_max         priority_queue<ll>
#define pq_min         priority_queue<ll,vi,greater<ll>
#define ff             first
#define ss             second
#define mid(l,r)       (l+(r-l)/2)
#define loop(i,a,b)    for(int i=(a); i <=(b);i++)
#define looprev(i,a,b) for(int i=(a); i >=(b);i--)
#define clr(val)       memset(val,0,sizeof(val))
#define what_is(x)     cerr << #x << " is " << x << endl; 
#define OJ             \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
 
int main() 
{
    ll t;
    cin>>t;
 
    while(t--){
        ll n,k,x,y;
        cin>>n>>k>>x>>y;

        if (x == y){
            cout<<n<<" "<<n<<endl;
        }
        else{
            if (x > y){
               while(k > 0){
                   if (k - 4 >= 0){
                       k -= 4;
                       x = x - y;
                       y = 0;
                    }
                    else if (k - 3 >= 0){
                       k -= 3;
                       y = x - y;
                       x = 0;
                    }
                    else if (k - 2 >= 0){
                       k -= 2;
                       x = y + n - x;
                       y = n;
                    }
                    else if (k - 1 >= 0){
                       k -= 1;
                       y = y + n - x;
                       x = n;
                    }
                }
                cout<<x<<" "<<y<<endl;
            }
            else{
                while(k > 0){
                   if (k - 4 >= 0){
                       k -= 4;
                       y = y - x;
                       x = 0;
                    }
                    else if (k - 3 >= 0){
                       k -= 3;
                       x = y - x;
                       y = 0;
                    }
                    else if (k - 2 >= 0){
                       k -= 2;
                       y = x + n - y;
                       x = n;
                    }
                    else if (k - 1 >= 0){
                       k -= 1;
                       x = x + n - y;
                       y = n;
                    }
                }
                cout<<x<<" "<<y<<endl;
            }
        }
    }
return 0;
   
}