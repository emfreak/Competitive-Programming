#include<iostream>
using namespace std;
void unionArr(int ar[], int br[], int m, int n){
    int i=0, j=0;
    while(i<m && j<n){
        if(i>0 && ar[i]==ar[i-1]){ i++; continue;}
        if(j>0 && br[j]==br[j-1]){ j++; continue;}
        if(ar[i]<br[j]){ cout<<ar[i]; i++;}
        else if(ar[i]>br[j]){ cout<<br[j]; j++;}
        else {cout<<ar[i]; i++; j++;}
    }
    while(i<m){
        if(i>0 && ar[i]!=ar[i-1]) {cout<<ar[i]; i++;}
    }
    while(j<n){
         if(j>0 && br[j]!=ar[j-1]) {cout<<br[j]; j++;}
    }
}
int main()
{
    int m, n, ar[10], br[10];
    cin>>m>>n;
    for(int i=0;i<m;i++) cin>>ar[i];
    for(int i=0;i<n;i++) cin>>br[i];
    unionArr(ar,br,m,n);
}
