#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,k,ar[1001];
void soln()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++) cin>>ar[i];
    if(k*2<n){
        cout<<"NO"<<endl;
        return;
    }
    map<int,int> q;
    for(int i=1;i<=n;i++){
        q[ar[i]]++;
        if(q[ar[i]]==3){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

signed main()
{
    int tCase; cin>>tCase;
    for(int i=1;i<=tCase;i++){
        cout<<"Case #"<<i<<": ";
        soln();
    }
}