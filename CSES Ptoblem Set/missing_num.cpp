#include<bits/stdc++.h>
//#include<numeric>
using namespace std;
#define ll long long
int main()
{
    ll num,i;
    vector<ll> v;
    cin>>num;
    for (i = 0; i < num-1; i++)
    {   ll n;
        cin>>n;
        v.push_back(n);
    }
    sort(v.begin(),v.end());
    ll sum=num*(num+1)/2;
    //ll sum_of_vect=accumulate(v.begin(), v.end(), 0);
    ll sum_of_vect=0;
    for(i=0;i<v.size();i++)
    {
        sum_of_vect+=v[i];
    }
    ll misnum=sum-sum_of_vect;
    cout<<misnum<<endl;
    return 0;
}