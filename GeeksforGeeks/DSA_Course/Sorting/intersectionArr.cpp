/* Intersection of two arrays.
**Both arrays should be sorted!
* If unsorted then first sort it then apply inntersect function.
*/

#include<iostream>
using namespace std;
void intersect(int ar[], int br[], int m, int n)
{
    int i=0, j=0, k=0;
    int arr[10];
    while(i<m && j<n){
        if(i>0 && ar[i]==ar[i-1]){ i++; continue;}
        if(ar[i]<br[j]) i++;
        else if(ar[i]>br[j]) j++;
        else {arr[k]=ar[i]; i++; j++; k++;}
    }
    int n1=sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n1; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main()
{
    int m, n, ar[10], br[10];
    cin>>m>>n;
    for(int i=0;i<m;i++) cin>>ar[i];
    for(int i=0;i<n;i++) cin>>br[i];
    intersect(ar,br,m,n);
}