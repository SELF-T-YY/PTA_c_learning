#include<bits/stdc++.h>
using namespace std;
int N=0;
int sum=0;
int a[50]={0};
int countNum=0;
int vlue=-1;
void dg(int x)
{
	if(sum==N)
	{
		countNum++;
		cout<<N<<'=';
		for(int i=0;i<vlue;i++)
			cout<<a[i]<<'+';
		if(countNum%4==0||a[vlue]==N)
			cout<<a[vlue]<<'\n';
		else
			cout<<a[vlue]<<';';
		return;
	}
	else if(sum>N)return;
	for(int i=x;i<=N;i++)
	{
		a[++vlue]=i;
		sum+=i;
		dg(i);
		sum-=i;
		vlue--;
	}
}
int main()
{
	cin>>N;
	dg(1);
	return 0;
}
