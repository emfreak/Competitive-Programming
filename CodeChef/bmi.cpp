#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int bMi(ll M, ll H)
{
    ll bm=0;
    bm=M/(pow(H,2));
    if (bm<=18)
    {
        return 1;
    }
    else if (bm>18 && bm<=24)
    {
        return 2;
    }
    else if (bm>24 && bm<=29 )
    {
        return 3;
    }
    else if (bm>=30)
    {
        return 4;
    }
    
    return 0;
}
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    ll T;
    cin>>T;
    while(T--)
    {
        ll M, H;
        cin>>M>>H;
        int ans=bMi(M,H);
        cout<<ans<<"\n";
    }
    return 0;
}