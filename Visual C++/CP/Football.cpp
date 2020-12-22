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
    string s;
    cin>>s;
 
    ll n = s.length();

    loop(i,0,n-1){
        if(s[i] == '0' && s[i+1] == '0' && s[i+2] == '0' && s[i+3] == '0' && s[i+4] == '0' && s[i+5] == '0'
        && s[i+6] == '0' || s[i] == '1' && s[i+1] == '1' && s[i+2] == '1' && s[i+3] == '1' && s[i+4] == '1' 
        && s[i+5] == '1' && s[i+6] == '1'){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
 
return 0;
   
}