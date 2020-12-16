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
        ll n;
        cin>>n;
        vector <ll> dp;

        if (n >= 1 && n <= 9){      //Base Case
            cout<<n<<endl;
        }

        else if (n >= 46){          //Base Case
            cout<<-1<<endl;
        }
                        
        else{                       //Dead Case
            for(int i = 9; i >= 1; i--){
                n -= i;
                if (n == 0){
                    dp.push_back(i);
                    sort(dp.begin(),dp.end());
                    loop(i,0,dp.size()-1){
                        cout<<dp[i];
                    }
                    cout<<endl;
                    break;
                }
                else if(n > 0){
                    dp.push_back(i);
                }
                else{
                    n += i;
                }
            }
        }
 
    }
return 0;
   
}