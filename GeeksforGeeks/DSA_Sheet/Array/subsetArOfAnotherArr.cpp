#include<iostream>
#include<vector>
#include<map>
using namespace std;
string subarOfAr(int ar1[], int ar2[], int n, int m){
    map<int,int> s1;
    map<int,int> s2;
    for(int i=0;i<n;i++){
        s1[ar1[i]]++;
    }
    for(int i=0;i<m;i++){
        s2[ar2[i]]++;
    }
    for(int i=0;i<m;i++){
        if(s1[ar2[i]]<s2[ar2[i]])
        {
            return "No";
        }
    }
    return "Yes";
}
int main()
{
    int ar1[100], ar2[100], n, m;
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        cin>>ar1[1];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>ar2[1];
    }
    string ans= subarOfAr(ar1,ar2,n,m);
    cout<<ans;

}
