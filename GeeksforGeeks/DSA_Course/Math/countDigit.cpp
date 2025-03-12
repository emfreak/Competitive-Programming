#include<bits/stdc++.h>
using namespace std;
int main()
{
    int digit, num=0;
    cin>>digit;
    while (digit!=0)
    {
        ++num;
        digit/=10;
    }
    cout<<num;
    
}