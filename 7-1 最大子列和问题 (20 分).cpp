#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	int a[101]={0};
	cin>>n>>k;
	for(int i=0;i<n;i++)
		cin>>a[i];
	int temp;
	for(int i=0;i<k;i++)
	{
		for(int j=1;j<n-i;j++)
		{
			if(a[j-1]>a[j])
			{
				temp=a[j-1];
				a[j-1]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
} 
