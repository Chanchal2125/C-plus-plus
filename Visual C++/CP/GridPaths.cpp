#include <iostream>
#include <cmath>
#include <climits>
#include <vector>
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
    vector <vector <ll>> arr(n, vector <ll> (n,0));
    loop(i,0,n-1){
        loop(j,0,n-1){
            char ch;
            cin>>ch;
            arr[i][j] = (ch == '.') ? 1 : 0;
        }
    }
    vector <vector <ll>> dp(n, vector <ll> (n,0));
    if (arr[n-1][n-1] == 1) dp[n-1][n-1] = 1;
    looprev(i,n-2,0){
        if (arr[i][n-1] == 0) dp[i][n-1] = 0;
        else{
            dp[i][n-1] += dp[i+1][n-1];
        }
    }
    looprev(i,n-2,0){ //last column
        if (arr[n-1][i] == 0) dp[n-1][i] = 0;
        else{
            dp[n-1][i] += dp[n-1][i+1];
        }
    }
    looprev(i,n-2,0){ //last row
        looprev(j,n-2,0){
        if (arr[i][j] == 0) dp[i][j] = 0;
        else{
            dp[i][j] += (dp[i+1][j]%mod + dp[i][j+1]%mod)%mod;
        }
    }
    }

    cout<<dp[0][0];
return 0;
   
}