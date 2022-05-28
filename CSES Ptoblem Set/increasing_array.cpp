#include<bits/stdc++.h>
using namespace std;
int main()
{
    cin.sync_with_stdio(0); cin.tie(0);
    int n;
    cin>>n;
    long long ans=0, x=0;
    while (n--)
    {
        long long num; cin>>num;
        if(num<x) ans+=x-num;
        x=max(x,num);
    }
    cout<<ans<<"\n";
    return 0;


} 