#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void spacear(vector<int> ar, int N)
{
    sort(ar.begin(),ar.end());
    //ll sum_of_n= ar.size()*(ar.size()+1)/2;
    //ll sum=0;
    //for(ll i=0;i<ar.size();i++) sum+=ar[i];
    int flag=0;
    int diff= 0; //sum_of_n-sum;
    string s;
    for(int i=0;i<N;i++)
    {
        if((i+1-ar[i])<0)
        {
            flag++; break;
        }
        diff+=i+1-ar[i];
    }
    if(flag==1||diff%2==0) cout<<"Second\n";
    else cout<<"First\n";
}
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while (T--)
    {
        ll N;
        vector<int> ar;
        cin>>N;
        for (int i = 0; i < N; i++)
        {
            int n;
            cin>>n;
            ar.push_back(n);
        }
        spacear(ar,N);
    }
    

}