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
	int n,k;
	cin>>n>>k;
	bool flag=true;
	int sum=0;
	if(k>10)k=10;
	for(int i=n;i>1;i--)
	{
		if(ss(i))
		{
			k--;
			sum+=i;
			if(flag)
			{
				flag=false;
				cout<<i;
			}
			else
			{
				cout<<'+'<<i;
			}
		}
		if(k==0)break;
	} 
	cout<<"="<<sum;
	return 0;
}
