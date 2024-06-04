#include<iostream>
#include<algorithm>
using namespace std;
void merge(int arr[], int low, int mid, int high)
{
    int n1=mid-low+1, n2=high-mid;
    int ar[10], br[10];
    for(int i=0;i<n1;i++) ar[i]=arr[low+i];
    for(int i=0;i<n2;i++) br[i]=arr[mid+i+1];
    int i=0, j=0, k=low;
    while(i<n1 && j<n2){
        if(ar[i]<=br[j]){
            arr[k++]=ar[i++];
        }
        else{
            arr[k++]=br[j++];
        }
    }
    while(i<n1){arr[k++]=ar[i++]; }
    while(j<n2){arr[k++]=br[j++]; }
    
}

void mergeSort(int arr[], int l, int h){
    if(h>l){
        int mid=l+(h-l)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,h);
        merge(arr,l,mid,h);
    }
}

int main()
{
    int n; cin>>n;
    int arr[10];
    for(int i=0;i<n;i++) cin>>arr[i];
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++)
	    cout<<arr[i]<<" ";
        return 0;
}

/*#include <iostream>
#include <algorithm>
using namespace std;

void merge(int arr[], int l, int m, int h){
    
    int n1=m-l+1, n2=h-m;
    int left[10],right[10];
    for(int i=0;i<n1;i++)
        left[i]=arr[i+l];
    for(int j=0;j<n2;j++)
        right[j]=arr[m+1+j];    
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(left[i]<=right[j])
            arr[k++]=left[i++];
        else
            arr[k++]=right[j++];
    }
    while(i<n1)
        arr[k++]=left[i++];
    while(j<n2)
        arr[k++]=right[j++];    
}

void mergeSort(int arr[],int l,int r){
    if(r>l){
        int m=l+(r-l)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}

int main() {
	
    int n;
    cin>>n;
    int a[10];
    for(int i=0;i<n;i++) cin>>a[i];
	int l=0,r=n-1;
	
	mergeSort(a,l,r);
	for(int i=0;i<n;i++)
	    cout<<a[i]<<" ";
}*/