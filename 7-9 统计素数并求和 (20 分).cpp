#include<bits/stdc++.h>
using namespace std;
bool ss(int n)
{
	if(n==1)return false;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)return false;
	}
	return true;
}
int main()
{
	int m,n;
	cin>>m>>n;
	int count=0;
	int sum=0;
	for(int i=m;i<=n;i++)
	{
		if(ss(i))
		{
			count++;
			sum+=i;
		}
	}
	cout<<count<<' '<<sum;
	return 0;
}
