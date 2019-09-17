#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[101]={0};
	int b[100000]={0};
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	int vlue =0;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			b[vlue]=a[i]+a[j];
			vlue++;
		}
	}
	sort(b,b+vlue);
	for(int i=0;i<vlue-1;i++)
		cout<<b[i]<<' ';
	cout<<b[vlue-1];
	
	return 0;
}
