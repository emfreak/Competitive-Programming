#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll ansxor(ll C)
{
    ll d=1, x=0;
    while (x<=C)
    {
        x=pow(2,d);
        d++;
    }
    d-=2;
    ll bits_=floor(log2(C))+1;
    ll unsigned A=((1<<bits_)-1)^C;
    A+=pow(2,d);
    ll B=pow(2,d)-1;
    return (A*B);
}
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    ll T;
    cin>>T;
    while(T--)
    {
        ll C;
        cin>>C;
        ll ans= ansxor(C);
        cout<<ans<<"\n";
    }
    
}