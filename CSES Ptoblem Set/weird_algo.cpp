#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll num;
    cin>>num;
    cout<<num<<" ";
    while(1)
    {
        if(num==1) break;
        else if(num%2==0)
        {
            num/=2;
            cout<<num<<" ";
        }
        else
        {
            num=num*3+1;
            cout<<num<<" ";
        }
        
        
    }
}