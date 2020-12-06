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
 
 
int main() 
{
    ll d1,v1,d2,v2,p;
    cin>>d1>>v1>>d2>>v2>>p;
 
    ll count = 0;
    //Days are same
    if (d1 == d2){
        ll t = v1+v2;
        count = d1 - 1;
        loop(i,1,10e9){
            ll ans = t*i;
            if (ans >= p) {
            count += i; 
            break;
            }
        }
        cout<<count;
        return 0;
    }
    //Days are different
    count = min(d1,d2) - 1;
    if (d1 > d2){
        ll tree = (d1 - d2) * v2;
        count += (d1-d2);
        p -= tree;
    }
    else{
        ll tree = (d2 - d1) * v1;
        count += (d2-d1);
        p -= tree;
    }
    ll mew = v1 + v2;
    loop(i,1,10e9){
        ll ans = mew * i;
        if (ans >= p){
            count += i;
            break;
        }
    }
    cout<<count;
 
return 0;
   
}