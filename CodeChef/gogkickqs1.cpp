#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll goodness(string s, ll K, ll N)
{
    ll count=0;
    ll temp=0, k;
    k=N-1;
    while(temp<k)
    {
        if (s[temp]!=s[k]) count++;
        temp++;
        k--;
    }
    return abs(K-count);
}
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        ll N, K,t;
        cin>>N>>K;
        string s;
        cin>>s;
        ll ans=goodness(s,K,N);
        cout<<"Case #"<<i<<": "<<ans<<"\n";
    }
    return 0;
}