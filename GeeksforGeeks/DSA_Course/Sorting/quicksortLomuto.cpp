/* Quicksort using Lomuto partition.*/
#include<iostream>
using namespace std;
int pivotpos(int arr[], int start, int end){
    int pivot=arr[end];
    int i=start-1;
    int temp;
    for(int j=start;j<end;j++){
        if(arr[j]<pivot){
            ++i;
            temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
    }
    ++i;
    temp=arr[end];
    arr[end]=arr[i];
    arr[i]=temp;
    return i;
}
void quickSort(int arr[], int start, int end){
    if(start<end){
        int pos=pivotpos(arr,start,end);
        quickSort(arr,start,pos-1);
        quickSort(arr,pos+1,end);
    }
}
int main()
{
    int arr[]={8,4,7,9,3,10,5};
	int n=sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}