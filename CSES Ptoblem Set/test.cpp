#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define p (ll)(1e9 + 7)
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    ll num;
    cin>>num;
    ll res = 1;
    ll x=2;
    ll y= num;
    x = x % p;
  
    while (y > 0) { 
  
        if (y & 1) 
            res = (res * x) % p; 
        y = y >> 1;
        x = (x * x) % p; 
    } 
    cout<<res<<"\n";
}