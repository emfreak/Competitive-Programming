#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num, x=0;
    cin>>num;
    for(int i=0; i<num;i++)
    {
        string s;
        cin>>s;
        if(s=="X++") x++;
        else if(s=="++X") ++x;
        else if(s=="--X") --x;
        else if(s=="X--") x--;
    }
    cout<<x;
    return 0;
}