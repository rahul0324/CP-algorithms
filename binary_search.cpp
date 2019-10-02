
// Author : reclone_rk
#include <bits/stdc++.h>
using namespace std; 
 
int binarySearch(int arr[], int l, int r, int x) 
{ 
	if (r >= l) { 
		int mid = l + (r - l) / 2; 

		
		if (arr[mid] == x) 
			return mid; 

		
		if (arr[mid] > x) 
			return binarySearch(arr, l, mid - 1, x); 

		 
		return binarySearch(arr, mid + 1, r, x); 
	} 

	
	return -1; 
} 

int main(void) 
{ 
	int n;
	cout<<"Enter number of elements"<<endl;
	cin>>n;

	cout<<"Enter elements"<<endl;
	int a[n];

	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	int result = binarySearch(arr, 0, n - 1, x); 
	(result == -1) ? printf("Element is present in array") 
				: printf("Element is not present at index %d", 
							result); 
	return 0; 
} 
