#include<bits/stdc++.h>
using namespace std;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    int x[n], y[n], a[n], b[n], c[n], d[n];
    for (int i = 0; i < n; i++)
    {
        cin>>x[i]>>y[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>a[i]>>b[i]>>c[i]>>d[i];
    }
    for (int i = 0; i < m; i++)
    {
        if (a[i]>c[i])
        {
            swap(a[i],c[i]);
            swap(b[i],d[i]);
        }
        if (i%2==0)
        {
            cout<<-a[i]<<" "<<-b[i]-1<<"\n";
        }
        else
        {
            cout<<(1-a[i])<<" "<<(-b[i])<<"\n";
        }
        
    }
    return 0;
    
}