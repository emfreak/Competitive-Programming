#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    ll num, fact=1, count=0;
    cin>>num;
    /*for (ll i = 1; i <= num; i++)
    {
        fact*=i;
    }*/
    for(ll i=5;num/i>0;i*=5)
    {
        count+=num/i;
    }
    cout<<count;
}