// Author : reclone_rk
// min element algorithm in order of o(n)
// code optimized with O(n) in just 5 line
#include <bits/stdc++.h>
using namespace std; 

int main()
{
	int n;
	cout<<"Enter number of elements"<<endl;
	cin>>n;

	cout<<"Enter elements"<<endl;
	int a[n];

	int min_element = INT_MAX;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		min_element = min(min_element,a[i]);
	}

	cout<<min_element<<endl;
	
	return 0;
}
