#include<bits/stdc++.h>
using namespace std;
int Reversort(vector<int> v ,int n){
    int x=n;
    vector<pair<int ,int>>p;
    for(int i=1;i<x;i++){
        p.push_back(make_pair(v[i],i));
    }
    int count=0;
    int k=1;
    int j=0;
    for(int i=1;i<p.size();i++){
        
        if(i<p.size()){
        int u=(p[i-1].second);
        int j=u+1;
        reverse(v.begin()+k, v.begin()+j);
        
        k++;
      count=count+i;  
        }
        
    }
return count;
}

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
    int x,y;
    cin>>x;
    y=x+1;
    vector<int> v;
    for(int i=1;i<y;i++){
        int z;cin>>z;
        v.push_back(z);}
    
    cout<<Reversort(v,y)<<endl;
}
return 0;}