/* Trailing Zeros in a factorial of n numbers.*/


#include<bits/stdc++.h>
using namespace std;
int trailZeros(int num)
{
    if(num<0) return -1;
    int count=0;
    for ( int i = 5; num/i >=1 ; i*=5)
    {
        count+=num/i;
    }
    return count;
    
}
int main()
{
    int num,ans;
    cin>>num;
    ans=trailZeros(num);
    cout<<ans;
    return 0;
}                      