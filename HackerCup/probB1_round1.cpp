#include<bits/stdc++.h>
#define ll long long int
using namespace std;
#define vll vector<ll>
#define rep(yy, zz) for(yy=0;yy<zz;yy++)
void solmil(ll j)
{
    cout<<"Case #"<<j<<": ";
   

ll n, q, i;  

ll xs = 0, ys = 0, ans = 0;

cin >> n;
vll x1(n), y1(n);
rep(i, n) cin >> x1[i] >> y1[i];

cin >> q;
vll x2(q), y2(q);
rep(i, q) cin >> x2[i] >> y2[i];

rep(i, n) ans = (ans + q * (x1[i] * x1[i] | y1[i] * y1[i]));

rep(i, q) ans = (ans + n * (x2[i] * x2[i] + y2[i] * y2[i]));

rep(i, n) {

xs += x1[i];

ys += y1[i];

} 
rep(j, q) ans -= 2 * (xs * x2[j] + ys* y2[j]);

cout << ans % 1000000007 << "\n";

}



int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("ans.txt","w",stdout);
    int t;
    cin>>t;
    int j=1;
    while(j<=t)
    {

        solmil(j);
        j++;
    }
    return 0;
}