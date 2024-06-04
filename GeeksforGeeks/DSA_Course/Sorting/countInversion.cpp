#include<iostream>
using namespace std;
int mergeer(int arr[], int low, int mid, int high){
    int n1=mid-low+1;
    int n2=high-mid;
    int ar[n1], br[n2];
    for(int i=0;i<n1;i++)
        ar[i]=arr[low+i];
    for(int j=0;j<n2;j++)
        br[j]=arr[mid+1+j];
    int res=0, i=0, j=0, k=low;
    while(i<n1 && j<n2){
        if(ar[i]<=br[j]) 
            arr[k++]=ar[i++];
        else{
            arr[k++]=br[j++];
            res=res+(n1-i);
        }
    }
    while(i<n1)
    {arr[k++]=ar[i++];}
    while(j<n2)
    {arr[k++]=br[j++];}
    return res;
}
int convArr(int arr[], int l, int h){
    int res=0;
    if(l<h){
        int mid=(l+h)/2;
        res +=convArr(arr,l,mid);
        res +=convArr(arr,mid+1,h);
        res +=mergeer(arr,l,mid,h);
    }
    return res;
}
int main(){
    int arr[]={2,4,1,3,5};
	int n=sizeof(arr)/sizeof(arr[0]);
    int ans= convArr(arr,0,n-1);
    cout<<ans;
    return 0;
}
/*#include <bits/stdc++.h>
using namespace std;

int countAndMerge(int arr[], int l, int m, int r)
{
    int n1=m-l+1, n2=r-m;
    int left[n1],right[n2];
    for(int i=0;i<n1;i++)
        left[i]=arr[i+l];
    for(int j=0;j<n2;j++)
        right[j]=arr[m+1+j];    
    int res=0,i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(left[i]<=right[j])
            {arr[k++]=left[i++];}
        else{
            arr[k++]=right[j++];
            res=res+(n1-i);
        }
    }
    while(i<n1)
        arr[k++]=left[i++];
    while(j<n2)
        arr[k++]=right[j++];
    return res;
}

int countInv(int arr[], int l, int r)
{
    int res = 0;
    if (l<r) {
       
        int m = (r + l) / 2;
 
        res += countInv(arr, l, m);
        res += countInv(arr, m + 1, r);
        res += countAndMerge(arr, l, m , r);
    }
    return res;
}
 
int main() {
	
    int arr[]={2,4,1,3,5};
	
	int n=sizeof(arr)/sizeof(arr[0]);
	
	cout<<countInv(arr,0,n-1);
}*/