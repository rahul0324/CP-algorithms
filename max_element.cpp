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



int findMaxSum(node* root, int& ans){
    if(root == NULL)
        return 0;
    if(root->left == NULL and root->right == NULL)
        return root->data;
    int l = findMaxSum(root->left, ans);
    int r = findMaxSum(root->right, ans);
    int val=root->data, maxval=INT_MIN;
    if(root->left != NULL){
        maxval = max(maxval, l);
        val += l;
    }
    if(root->right != NULL){
        maxval = max(maxval, r);
        val += r;
    }
    if(root->left != NULL and root->right != NULL)
        ans = max(ans, val);
    return root->data+maxval;
}
