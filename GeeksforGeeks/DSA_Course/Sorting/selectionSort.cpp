#include<iostream>
using namespace std;
void selection(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        int pos=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[pos]) pos=j;
        }
        int t=arr[pos];
        arr[pos]=arr[i];
        arr[i]=t;
    }
}
int main()
{
    int n=5, arr[10]={2,1,0,4,6};
    selection(arr,n);
    for(int i=0;i<n;i++)
    cout<<arr[i];
}