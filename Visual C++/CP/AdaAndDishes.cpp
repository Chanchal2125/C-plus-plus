#include <iostream>
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
 
 /*
    3
    3
    2 2 2               4
    3
    1 2 3               3
    4
    2 3 4 5             7
 */
 
int main() 
{
    ll t;
    cin>>t;
    loop(i,1,t){
        ll n,b1 = 0, b2 = 0;
        cin>>n;
        vector <ll> dp(n);
        loop(i,0,n-1) cin>>dp[i];
        sort(dp.rbegin(),dp.rend());
        loop(i,0,n-1){
            if (b1 < b2){
                b1 += dp[i];
            }
            else{
                b2 += dp[i];
            }
        }
        cout<<max(b1,b2)<<endl;
    }
 
return 0;
   
}