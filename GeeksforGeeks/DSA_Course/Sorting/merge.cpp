
#include<iostream>
using namespace std;
int* merge(int ar[], int m, int br[], int n)
{
    static int c[20];
    int i=0, j=0, k=0;
    while(i<m && j<n)
    {
        if(ar[i]<=br[j]) {c[k]=ar[i]; i++; k++;}
        else { c[k]=br[j]; j++; k++;}
    }
    while(i<m){
        c[k]=ar[i]; i++; k++;
    }
    while(j<n){
        c[k]=br[j]; j++; k++;
    }
    return c;
}
int main(){
    int m, n;
    cin>>m>>n;
    int ar[10], br[10];
    for(int i=0;i<m;i++) cin>>ar[i];
    for(int i=0;i<n;i++) cin>>br[i];
    int* p= merge(ar,m,br,n);
    for(int i=0;i<m+n;i++) cout<<" "<<p[i];
    return 0;
}