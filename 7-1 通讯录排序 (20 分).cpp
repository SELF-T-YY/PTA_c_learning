#include<bits/stdc++.h>
using namespace std;
struct man{
	char name[10];
	double basicP;
	double floatP;
	double outP; 
	double ans;
}a[99999];
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i].name>>a[i].basicP>>a[i].floatP>>a[i].outP;
		a[i].ans=a[i].basicP+a[i].floatP-a[i].outP;		
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i].name;
		printf(" %.2lf\n",a[i].ans);
	}
	return 0;
} 
