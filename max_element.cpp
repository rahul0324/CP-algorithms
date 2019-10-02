// Author : reclone_rk
#include <bits/stdc++.h>
using namespace std; 

int main()
{
	int n;
	cout<<"Enter number of elements"<<endl;
	cin>>n;

	cout<<"Enter elements"<<endl;
	int a[n];

	int max_element = INT_MAX;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		max_element = max(max_element,a[i]);
	}

	cout<<max_element<<endl;
	
	return 0;
}
