#include<bits/stdc++.h>
using namespace std;
int modeq(int n, int m)
{
    int count=0;
    for (int i = 1; i <= int(log(n))+1; i++)
    {
        for (int j = i+1; j <=n; j++)
        {
            if (((m%i)%j)==((m%j)%i))
            {
                count++;
            }   
        }   
    }
    return count; 
}
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        int ans=modeq(n,m);
        cout<<ans<<"\n";
    }
    
}