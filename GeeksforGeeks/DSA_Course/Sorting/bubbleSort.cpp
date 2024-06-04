#include<iostream>
using namespace std;
void bubble(int arr[], int n)
{
    for(int i=0;i<n;i++){
        bool swapped= false;
        for(int j=i+1;j<n-i-1;j++)
        {
            if(arr[i]>arr[j]){
                int t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
            swapped= true;
        }
        if(swapped==false) break;
    }
}
int main()
{
    int n=5, arr[10]={4,2,3,7,0};
    bubble(arr,n);
    for (int  i = 0; i < 5; i++)
    {
        cout<<arr[i];
    }
    
}