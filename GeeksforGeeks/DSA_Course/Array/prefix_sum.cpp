#include<bits/stdc++.h>
using namespace std;
void prefixSum(int arr[], int preArr[], int n){
    preArr[0]=arr[0];
    for(int i=1;i<n;i++){
        preArr[i]=preArr[i-1]+arr[i];
    }
}
int main()
{
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int preArr[n]={0};
    prefixSum(arr, preArr, n);
    for(int i=0;i<n;i++) cout<<preArr[i]<<" ";

}