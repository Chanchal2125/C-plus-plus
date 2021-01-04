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
        ll w,h,n;
        cin>>w>>h>>n;

        if (n == 1){
            cout<<"YES"<<endl;
        }
        else if (w % 2 != 0 && h % 2 != 0 && n > 1){
            cout<<"NO"<<endl;
        }
        else{
            ll c = 1;
            while(w > 1 && h > 1){
                if (w % 2 == 0){
                    w = w / 2;
                    h = h;
                    c += 2;
                }
                else if (h % 2 == 0){
                    h = h / 2;
                    w = w;
                    c += 2;
                }
            }
            if (c >= n){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
 
return 0;
   
}