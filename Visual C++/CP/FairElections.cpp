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
        ll n,m,x = 0,y = 0;
        cin>>n>>m;
        ll a[n];
        loop(i,0,n-1){
            cin>>a[i];
            x += a[i];
        }
        ll b[m];
        loop(i,0,m-1){
            cin>>b[i];
            y += b[i];
        }

        ll v = INT_MAX;
        ll w = INT_MIN;
        ll c = 0;
        if (x > y){
            cout<<0<<endl;          //Base Case
        }
        else{
            while(x <= y && c <= max(n,m)){
                x = y = 0;
                c += 1;
                //SORTING
                sort(a,a+n);
                sort(b,b+m);

                //SWAPPING
                ll temp = a[0];
                a[0] = b[m-1];
                b[m-1] = temp;
                
                loop(i,0,n-1){
                    x += a[i];
                }
                loop(i,0,m-1){
                    y += b[i];
                }
            }
            if (c <= max(n,m)){
                cout<<c<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
    }
    
return 0;
   
}