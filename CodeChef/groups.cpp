#include<bits/stdc++.h>
using namespace std;
#define long long ll
int group(string s)
{
    int ans=0;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i-1]!=s[i]&& (s[0]=='1' || s[i]=='1'))
        {
            ans+=1;
        }
        //else if(s[i-1]=='1'&& s[i]=='1') continue;

    }
    return ans;
}
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--)
    {
        string s;
        cin>>s;
        int ans=group(s);
        cout<<ans<<"\n";
    }
}