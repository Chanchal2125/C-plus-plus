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
    long int x,c,i,j,s,n,array,num;
    pair<int, int>a[1000];
    while(cin>>s>>n)
    {
        c=1;
        for(i=0;i<n;i++)
        {
            cin>>a[i].first>>a[i].second;

        }
        sort(a,a+n);
         for(i=0;i<n;i++)
         {
             if(s<=a[i].first)
             {
                 c=0;
                 break;
             }
             else
             {
                 s=s+a[i].second;
             }
         }
         if(c==0)
            cout<<"NO\n";
         else
            cout<<"YES\n";
    }
 
return 0;
   
}