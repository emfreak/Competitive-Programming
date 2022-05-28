#include<bits/stdc++.h>
using namespace std;
void corsent(int k, string *s)
{
    
}
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        int k;
        cin>>k;
        string s[k];
        for (int i = 0; i < k; i++)
        {
            cin>>s[i];
        }
        corsent(k,s);
    }
    return 0;
}