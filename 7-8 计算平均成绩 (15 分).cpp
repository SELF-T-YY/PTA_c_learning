#include<bits/stdc++.h>
using namespace std;
struct man{
	char num[10];
	char name[11];
	int grade;
}a[10];
int main()
{
	int n;
	cin>>n;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i].num>>a[i].name>>a[i].grade;
		sum+=a[i].grade;
	}
	double adv=1.0*sum/n;
	printf("%.2lf", adv);
	for(int i=0;i<n;i++)
	{
		if(a[i].grade<adv)cout<<endl<<a[i].name<<' '<<a[i].num;
	}
		
	return 0;
}
