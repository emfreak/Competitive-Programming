#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int notym(int H, int x, vector<int> T)
{
    int flag=0;
    for (int i = 0; i < T.size(); i++)
    {
        if((T[i]+x)==H) flag=1;
    }
    
    return flag;
}
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    vector<int> T;
    int H, N, x;
    cin>>N>>H>>x;
    while(N--)
    {
        int inp;
        cin>>inp;
        T.push_back(inp);
    }
    int ans=notym(H,x,T);
    if(ans==0) cout<<"NO\n";
    else cout<<"YES\n";
}