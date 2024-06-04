/* Sorting using maxheap for ascending order, minheap for descending order.*/

#include<iostream>
using namespace std;
void heapify(int arr[], int n, int idx){
    int largest=idx;
    int left=2*idx+1;
    int right=2*idx+2;
    if(left<n && arr[left]>arr[largest]) largest=left;
    if(right<n && arr[right]>arr[largest]) largest=right;
    if(largest!=idx){
        int t= arr[largest];
        arr[largest]=arr[idx];
        arr[idx]=t;
        heapify(arr,n,largest);
    }
}

void buildheap(int arr[], int n){
    for(int i=(n-2)/2;i>=0;i--)
    heapify(arr,n,i);
}

void heapsort(int arr[], int n){
    buildheap(arr,n);
    for (int  i = n-1; i >= 0; i--)
    {
        int t=arr[0];
        arr[0]=arr[i];
        arr[i]=t;
        heapify(arr,i,0);
    }
    
}

int main(){
    int arr[]={8,4,7,9,3,10,5};
	int n=sizeof(arr)/sizeof(arr[0]);
    heapsort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}