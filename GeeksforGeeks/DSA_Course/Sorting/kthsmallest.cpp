/* K-th smallest element in an array using partition technique.*/

#include<iostream>
using namespace std;
int partition(int arr[], int low, int high){
    int pivot=arr[high];
    int i=low-1;
    int temp;
    for(int j=low;j<high;j++){
        if(arr[j]<pivot){
            ++i;
            temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
    }
    ++i;
    temp=arr[high];
    arr[high]=arr[i];
    arr[i]=temp;
    return i;
}
int kthsmallest(int arr[], int n, int k){
    int low=0, high=n-1;
    while(low<=high){
        int pos=partition(arr,low,high);
        if (pos==k-1)
        {
            return pos;
        }
        else if(pos>k-1) high=pos-1;
        else low=pos+1;
    }
    return -1;
}

int main(){
    int arr[]={8,4,7,9,3,10,5};
	int n=sizeof(arr)/sizeof(arr[0]);
    int k; cin>>k;
    int ans= kthsmallest(arr,n,k);
    cout<<arr[ans];
}