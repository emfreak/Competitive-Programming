#include <bits/stdc++.h>

using namespace std;

// Complete the maxMin function below.
int maxMin(int k, vector<int> arr,int n) {

sort(arr.begin(),arr.end());
int mn=arr[n-1]-arr[0];
for(int j=0,temp;j<n-k+1;j++){
    temp=arr[j+k-1]-arr[j];
    if(temp<mn)
    mn=temp;
}
return mn;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item;
        cin >> arr_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        arr[i] = arr_item;
    }

    int result = maxMin(k, arr,n);

    fout << result << "\n";

    fout.close();

    return 0;
}