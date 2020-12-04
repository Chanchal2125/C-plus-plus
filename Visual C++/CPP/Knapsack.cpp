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
 
ll knapsack(ll value[],ll weight[],ll n, ll m){
    
    if (n == 0 || m == 0){
        return 0;
    }

    if (weight[n-1] > m){
        return knapsack(value,weight,n-1,m);
    }

    return max(knapsack(value,weight,n-1,m-weight[n-1]+value[n-1]),knapsack(value,weight,n-1,m));
}

int main() 
{

    ll weight[] = {10,20,30};
    ll value [] = {100,50,150};
    ll m = 50;
    
    cout<<knapsack(value,weight,3,m)<<endl;
return 0;
   
}