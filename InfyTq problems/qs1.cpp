#include<bits/stdc++.h>
using namespace std;
void reverse(int i, int j, int* arr)
{
    int x = i;
    int y = j;

    while(x<=y)
    {
        swap(arr[x], arr[y]);
        x++;
        y--;
    }
}
int minInd(int* arr,int n)
{
     long long ans = 0;

        for(int i=0; i<n-1; i++)
        {
            int minIndex = n-1;
            int min = INT_MAX;

            for(int j=n-1; j>=i; j--)
            {
                if(arr[j]<min)
                {
                    min = arr[j];
                    minIndex = j;
                }
            }

            reverse(i, minIndex, arr);
            ans += minIndex-i+1;
        }
        return ans;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);  
    int t;
    cin >> t;
    int caseNo = 0;

    while(t--)
    {
        int n;
        cin >> n;

        int arr[n];

        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        caseNo++;

        cout << "Case #" << caseNo << ':' << " " << minInd(arr,n) <<"\n";

    }

    return 0;
}