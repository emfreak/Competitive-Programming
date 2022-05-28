#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool consad(ll ar[1000][1000], ll br[1000][1000], ll r, ll c)
{
    for (ll i = 0; i < r; i++)
    {
        for (ll j = 0; j < c; j++)
        {
            if (ar[i][j]!=br[i][j])
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.sync_with_stdio(0);
    cout.tie(0);
    int T;
    cin>>T;
    while (T>0)
    {
        ll r, c, x;
        cin>>r>>c>>x;
        ll ar[r][c], br[r][c];
        for (ll i = 0; i < r; i++)
        {
            for (ll j = 0; i < c; i++)
            {
                ll x;
                cin>>x;
                ar[i][j]=x;
            }
        }
        for (ll i = 0; i < r; i++)
        {
            for (ll j = 0; i < c; i++)
            {
                ll x;
                cin>>x;
                br[i][j]=x;
            }   
        }
        /*if (r<x && c<x)
        {
            if (consad(ar,br,r,c)) cout<<"True\n";
            else cout<<"No\n";
        }
        else if (r<x)
        {
            for (ll i = 0; i < r; i++)
            {
                for (ll j = 0; j <= (c-x); j++)
                {
                    if (ar[i][j]==br[i][j]) continue;
                    else
                    {
                        ll diff;
                        diff=br[i][j]-ar[i][j];
                        ar[i][j]+=diff;
                        ll k=1;
                        while (k<x)
                        {
                            ar[i][j+k]+=diff;
                            k++;
                        }
                    }
                }
                
            }
            if (consad(ar,br,r,c)) cout<<"True\n";
            else cout<<"No\n";
        }
        else if (c<x)
        {
            for (ll i = 0; i < c; i++)
            {
                for (ll j = 0; j < (r-x+1); j++)
                {
                    if (ar[j][i]==br[j][i]) continue;
                    else
                    {
                        ll diff;
                        diff=br[j][i]-ar[j][i];
                        ar[j][i]+=diff;
                        ll k=1;
                        while (k<x)
                        {
                            ar[j+k][i]+=diff;
                            k++;
                        }
                    }
                }
            }
            if (consad(ar,br,r,c)==true) cout<<"True\n";
            else cout<<"No\n";
        }
        else if (c>=x && r>=x)
        {
            for (ll i = 0; i < r; i++)
            {
                for (ll j = 0; j < (c-x+1); j++)
                {
                    if (ar[i][j]==br[i][j]) continue;
                    else
                    {
                        ll diff;
                        diff=br[i][j]-ar[i][j];
                        ar[i][j]+=diff;
                        ll k=1;
                        while (k<x)
                        {
                            ar[i][j+k]+=diff;
                            k++;
                        }
                    }
                }
            }
            for (ll i = 0; i < c; i++)
            {
                for (ll j = 0; j < (r-x+1); j++)
                {
                    if (ar[j][i]==br[j][i]) continue;
                    else
                    {
                        ll diff;
                        diff=br[j][i]-ar[j][i];
                        ar[j][i]+=diff;
                        ll k=1;
                        while (k<x)
                        {
                            ar[j+k][i]+=diff;
                            k++;
                        }
                    }
                }
            }
            if (consad(ar,br,r,c)) cout<<"True\n";
            else cout<<"No\n";
        }*/
        T--;
    }
    return 0;
}