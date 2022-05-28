#include<bits/stdc++.h>
using namespace std;
int powers(int x, unsigned int y)
{
    int res = 1;
    int p=1000000007;
    x = x % p;
  
    if (x == 0) return 0;
    if(y==0) return 1;
    if(y==1) return x;
 
    while (y > 0)
    {
        if (y & 1)
        res = (res*x) % p;
        y = y>>1;
        x = (x*x) % p;
    }
    return res;
}
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t>0)
    {
        int num;
        cin>>num;
        int ans= powers(2,num-1);
        cout<<ans<<"\n";
        t--;
    }

}