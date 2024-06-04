#include<bits/stdc++.h>
using namespace std;
void missing_repeating(int ar[])
{
    int temp, repeat, missing;
    for(int i=0;i<5;i++){
        temp=ar[abs(ar[i]-1)];
        if(temp<0)
        repeat=abs(ar[i]);
        ar[abs(ar[i]-1)]=-ar[abs(ar[i]-1)];
    }
    for(int i=0;i<5;i++){
        if(ar[i]>0)
        missing=i+1;
    }
    cout<<missing<<" "<<repeat;
}
int main(){
    int  ar[5]={2,3,1,2,5};
    sort(ar, ar+5);
    missing_repeating(ar);
}