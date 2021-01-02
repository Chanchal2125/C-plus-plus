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
#define loop(i,a,b)    for(int i=(a); i <=(b);i=i+4)
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
        string s;
        cin>>s;

        loop(i,0,s.length()-4){
            //1st half

            if (s[i] == '0' && s[i+1] == '0' && s[i+2] == '0' && s[i+3] == '0'){
                cout<<"a";
            }
            if (s[i] == '0' && s[i+1] == '0' && s[i+2] == '0' && s[i+3] == '1'){
                cout<<"b";
            }
            if (s[i] == '0' && s[i+1] == '0' && s[i+2] == '1' && s[i+3] == '0'){
                cout<<"c";
            }
            if (s[i] == '0' && s[i+1] == '0' && s[i+2] == '1' && s[i+3] == '1'){
                cout<<"d";
            }
            if (s[i] == '0' && s[i+1] == '1' && s[i+2] == '0' && s[i+3] == '0'){
                cout<<"e";
            }
            if (s[i] == '0' && s[i+1] == '1' && s[i+2] == '0' && s[i+3] == '1'){
                cout<<"f";
            }
            if (s[i] == '0' && s[i+1] == '1' && s[i+2] == '1' && s[i+3] == '0'){
                cout<<"g";
            }
            if (s[i] == '0' && s[i+1] == '1' && s[i+2] == '1' && s[i+3] == '1'){
                cout<<"h";
            }


            //2nd half
            if (s[i] == '1' && s[i+1] == '0' && s[i+2] == '0' && s[i+3] == '0'){
                cout<<"i";
            }
            if (s[i] == '1' && s[i+1] == '0' && s[i+2] == '0' && s[i+3] == '1'){
                cout<<"j";
            }
            if (s[i] == '1' && s[i+1] == '0' && s[i+2] == '1' && s[i+3] == '0'){
                cout<<"k";
            }
            if (s[i] == '1' && s[i+1] == '0' && s[i+2] == '1' && s[i+3] == '1'){
                cout<<"l";
            }
            if (s[i] == '1' && s[i+1] == '1' && s[i+2] == '0' && s[i+3] == '0'){
                cout<<"m";
            }
            if (s[i] == '1' && s[i+1] == '1' && s[i+2] == '0' && s[i+3] == '1'){
                cout<<"n";
            }
            if (s[i] == '1' && s[i+1] == '1' && s[i+2] == '1' && s[i+3] == '0'){
                cout<<"o";
            }
            if (s[i] == '1' && s[i] == '1' && s[i+2] == '1' && s[i+3] == '1'){
                cout<<"p";
            }
        }
        cout<<endl;
    }
 
 
return 0;
   
}