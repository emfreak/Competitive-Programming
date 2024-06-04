/* To find the number of occurences in an array.*/
#include<iostream>
using namespace std;
int first_ocurence(int arr[], int n, int x)
{   
    int low = 0, high = n - 1;

	while(low <= high)
	{
		int mid = (low + high) >> 1;

		if(x > arr[mid])
			low = mid + 1;

		else if(x < arr[mid])
			high = mid - 1;

		else
		{
			if(mid == 0 || arr[mid - 1] != arr[mid])
				return mid;

			else
				high = mid - 1;
		}

	}

	return -1;
}
int last_ocurance(int arr[], int n, int x){
    int low = 0, high = n - 1;

	while(low <= high)
	{
		int mid = (low + high) >> 1;

		if(x > arr[mid])
			low = mid + 1;

		else if(x < arr[mid])
			high = mid - 1;

		else
		{
			if(mid == n - 1 || arr[mid + 1] != arr[mid])
				return mid;

			else
				low = mid + 1;
		}

	}

	return -1;
}
int main()
{
    int n, x;
    cin>>n>>x;
    int arr[10];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    //sort(arr, arr+n);
    int i= first_ocurence(arr,n,x);
    int j= last_ocurance(arr,n,x);
    cout<<i<<" "<<j<<" "<<(j-i+1);
    
}