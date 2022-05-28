#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool checkPOW(ll N)
{
    for (ll i = 0; i < N; i++)
    {
        for (ll j = i+1; j <= N; j++)
        {
            ll sum = (i * i * i) + (j * j * j);
            if (sum == N) return true;
        }
    }
    return false;
}
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while (T--)
    {   ll num;
        cin>>num;
        bool f=checkPOW(num);
        if(f==false) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}