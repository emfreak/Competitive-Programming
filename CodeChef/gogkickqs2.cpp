#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int shape(int arr[1001][1001], int r, int c) 
{ 
    int count=0, t1, t2;
    t1=r; t2=c;
    while (t1>=2&&t2>=2)
    {
        for (int j = 0; j < c; j++) { 
  
        // traversing vertically 
        for (int i = 0; i <= r - j - 1; i++) 
            cout << arr[i][j] << " "; 
  
        // traverse horizontally 
        for (int k = j + 1; k < c; k++) 
            cout << arr[r - 1 - j][k] << " "; 
        t1--;
        t2--;
        count++;}
    }    
    return count;
} 
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        ll r,c;
        cin>>r>>c;
        int arr[1001][1001];
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin>>arr[i][j];
            }
        }
        ll ans=shape(arr,r,c);
        cout<<"Case #"<<i<<": "<<ans<<"\n";
    }
    return 0;
}