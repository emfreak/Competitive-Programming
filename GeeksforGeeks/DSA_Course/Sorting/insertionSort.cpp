#include<iostream>
using namespace std;
void selection(int arr[], int n)
{
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        int key=arr[i];
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main()
{
    int n=5, arr[10]={4,2,6,5,7};
    selection(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}