#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define p (ll)(1e9 + 7)
int div(int N)
{
    vector<int> v;
    for (int i = 1; i*i < N; i++) {
        if (N % i == 0)
            v.push_back(i);
    }
    for (int i = sqrt(N); i >= 1; i--) {
        if (N % i == 0)
            v.push_back(N/i);}
    int maxm=0;
    for(int i=0;i<v.size();i++)
    {
        
        if (maxm<v[i] && v[i]<=10)
        {
            maxm=v[i];
        }
        
    }
    return maxm;
}
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    //int v[11];
    int N;
    cin>>N;
    int maxm=div(N);
    cout<<maxm;
    return 0;
}