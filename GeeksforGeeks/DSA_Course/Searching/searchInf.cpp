/* Search a n element in an infinite size array.*/
#include<iostream>
using namespace std;
int binarysearch(int arr[], int l, int r, int x)
{
    while(r>=l){
        int mid=l+(r-1)/2;
        if(arr[mid]==x) return mid;
        else if(arr[mid]>x) return binarysearch(arr,l,mid-1,x);
        else return binarysearch(arr,mid+1,r,x);
    }
    return -1;
}
int pos(int arr[], int x)
{
    int l=0, h=1;
    int val=arr[0];
    while (val<x)
    {
        l=h;
        h=2*h;
        val=arr[h];
    }
    return binarysearch(arr,l,h,x);
}
int main()
{
    int n, arr[50], x;
    cin>>n>>x;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int ans= pos(arr,x);
    cout<<ans;
    return 0;
}