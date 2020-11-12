#include <iostream>
#include <cmath>
#include <climits>
#include <vector>
#include <set>
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
    ll n;
    cin>>n;
    vector <ll> arr(n,0);
    loop(i,0,n-1) cin>>arr[i];
    vector <ll> dp(n,0);
    //Base Case
    dp[0] = 0;
    dp[1] = arr[1] - arr[0];
    loop(i,1,n-1){
        dp[i] = min(dp[i-1] + abs(arr[i-1] - arr[i]),dp[i-2] + abs(arr[i-2] - arr[i]));
    }
    cout<<dp[n-1];
return 0;
   
}