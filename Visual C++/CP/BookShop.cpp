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
    int n,x;
    cin>>n>>x;
    vector <int> prices(n+1);
    vector <int> pages(n+1);
    loop(i,1,n){
        cin>>prices[i];
    }
    loop(i,1,n){
        cin>>pages[i];
    }
    vector <vector <int>> dp(n+1, vector <int>(x+1, 0));
    loop(i,1,n){
        loop(j,1,x){
            if (prices[i] > j){
                dp[i][j] = dp[i-1][j];
            }
            else{
                dp[i][j] = max(dp[i-1][j], dp[i-1][j - prices[i]] + pages[i]);
            }
        }
    }
 
    cout<<dp[n][x];
 
return 0;
   
}