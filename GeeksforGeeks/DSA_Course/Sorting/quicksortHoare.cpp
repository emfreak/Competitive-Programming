#include<iostream>
using namespace std;
int posHoare(int arr[], int low, int high){
    int i=low-1, j=high+1;
    int pivot=arr[low];
    while(true)
    {
        do
        {
            i++;
        } while (arr[i]<pivot);
        do
        {
            j--;
        } while (arr[j]>pivot);
        if(i>=j) return j;
        int t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;
    }
    
}
static void quickSort(int arr[], int low, int high){
    if(low<high){
        int pos= posHoare(arr, low, high);
        quickSort(arr,low,pos);
        quickSort(arr,pos+1,high);
    }
}
int main(){
    int arr[]={8,4,7,9,3,10,5};
	int n=sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}