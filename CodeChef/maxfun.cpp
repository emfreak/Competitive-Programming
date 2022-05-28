#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while (T--)
    {
        ll num, temp;
        vector<ll> ar, v;
        cin>>num;
        temp=num;
        while (temp--)
        {
            int n;
            cin>>n;
            ar.push_back(n);
        }
        sort(ar.begin(),ar.end());
        temp=abs(2*(ar[ar.size()-1]-ar[0]));
        cout<<temp<<"\n";

    }
    return 0;

}