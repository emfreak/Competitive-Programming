#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll t,n,q;
    cin>>t>>n>>q;
    while(t--){
    vector<ll> ar;
    
    cout<<"1 2 3"<<endl;
    
    ll size=3;
    ll p;
    cin>>p;
    if(p==2){
        ar.push_back(1);
        ar.push_back(2);
        ar.push_back(3);
        
    }
    else if(p==3){
        ar.push_back(1);
        ar.push_back(3);
        ar.push_back(2);
    }
    else{
        ar.push_back(2);
        ar.push_back(1);
        ar.push_back(3);
    }
    for(ll i=4;i<=n;i++){
        ll u=0;
        ll v=size-1;
        while(u<v){
            ll mid=u+((v-u)/2);
            cout<<ar[mid]<<" "<<ar[mid+1]<<" "<<(i)<<endl;
            cin>>p;
            if(p==ar[mid]){
                v=mid;
            }
            else if(p==ar[mid+1]){
                
                u=mid+1;
            }
            else{
                ar.insert(ar.begin()+mid+1,i);
                size++;
                break;
            }
        }
        if(size!=i){
            if(u==0){
                ar.insert(ar.begin(),i);
            }
            else{
                ar.push_back(i);
            }
            size++;
        }
    }
    for(auto i: ar){
        cout<<i<<" ";
    }
    cout<<"\n";
    if(p==-1){
        break;
    }
}
}