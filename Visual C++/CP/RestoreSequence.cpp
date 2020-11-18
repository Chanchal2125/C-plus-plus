#include <bits/stdc++.h>

#define     ll          long long
#define     ln          "\n"
#define     fastio      ios_base::sync_with_stdio(0); cin.tie(nullptr)
#define     MOD         (long long)1000000007
#define     rep(i, n)   for (long long i = 0; i < n; i++)
#define     all(x)      (x).begin(), (x).end()
#define     debug(x)    cerr << #x << " = " << x << endl;
#define     MAX         100000

using namespace std;

void solve()
{
    int n;
    cin>>n;

    // SAW THIS APPROACH FROM EDITORIAL 
    // TOO GOOD O(n) solution
    rep(i, n){
        int x;
        cin>>x;
        cout << n-x+1 << " ";
    }
    cout << ln;
    
}

signed main()
{
    fastio;
    
    auto start = std::chrono::high_resolution_clock::now();

    int t=1;
    cin>>t;
    
    while (t--)
        solve();
    
    auto stop = std::chrono::high_resolution_clock::now(); 
    auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start); 

    cerr << "\nTime taken : " << ((long double)duration.count())/((long double) 1e9) <<" s "<< endl;     

    return 0;
}
