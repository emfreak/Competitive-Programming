#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF (unsigned)!((int)0)
ll colglyf(ll N, ll E, ll H, ll A, ll B, ll C)
{
    ll price=1e15;
    if(2*N<=E)
    {
        ll prices= N*A;
        if(price>prices) price=prices;
    }
    if(3*N<=H)
    {
        ll prices= N*B;
        if(price>prices) price=prices;
    }
    if(N<=E && N<=H)
    {
        ll prices=N*C;
        if(price>prices) price=prices;
    }
    if((H-N)/2>=1 && (H-N)/2>=(N-E))
    {
        if (B-C<0)
        {
            ll t1, t2;
            t1=N-1; t2=(H-N)/2;
            ll minm=min(t1,t2);
            t1=(B-C)*minm+N*C;
            price=min(price,t1);
        }
        else
            {
                ll temp;
                temp=max(ll(1),(N-E));
                temp=(B-C)*temp+N*C;
                price=min(temp,price);
            }
        
    }
    if ((E-N)>=1 and (E-N)>=N-H)
    {
        if ((A-C)<0)
        {
            ll temp=min((N-1),(E-N));
            price=min(price,((A-C)*temp+N*C));
        }
        else
        {
            ll temp=max(ll(1),(N-H));
            price=min(price,((A-C)*temp+N*C));
        }
    }
    if (E/2>=1 and E/2>=(3*N-H+2)/3)
    {
        if ((A-B<0))
        {
            ll temp=min((N-1),(E/2));
            price=min(price,((A-B)*temp+N*B));
        }
        else
        {
            ll temp=max(ll(1),(3*N-H+2)/3);
            price = min(price,((A-B)*temp+N*B));
        }
    }
    if (E>=3 && H>=4 && N>=3)
    {
        ll temp=colglyf(N-3,E-3,H-4,A,B,C);
        price=min(price,(A+B+C+temp));
    }
    return price;
    
}
int main()
{
    ll T;
    cin>>T;
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);
    while(T--)
    {
        ll N, E, H, A, B, C;
        cin>>N>>E>>H>>A>>B>>C;
        ll ans=colglyf(N,E,H,A,B,C);
        if (ans== 1e15)
        {
            cout<<-1<<"\n";
        }
        else
        cout<<ans<<"\n";
    }
    
}