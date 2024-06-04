#include<bits/stdc++.h>
using namespace std;
int maxxGuest(int ariv[], int dep[], int n){
    sort(ariv,ariv+n);
    sort(dep,dep+n);
    int i=1, j=0, res=1, curr=1;
    while(i<n && j<n){
        if(ariv[i]<=dep[j]){
            curr++; i++;
        }
        else {
            curr--; j++;
        }
        res=max(curr,res);
    }
    return res;
}

int main(){
    int arr[] = { 900, 600, 700};
    int dep[] = { 1000, 800, 730};
    int n = sizeof(arr)/sizeof(arr[0]); 
    cout<<maxxGuest(arr,dep,n);
}