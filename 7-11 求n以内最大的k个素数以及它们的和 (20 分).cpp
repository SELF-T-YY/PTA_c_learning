#include<bits/stdc++.h>
using namespace std;
bool ss(int n)
{
	if(n==1)return false;
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0)return false;
	return true;
}

int main()
{
	int k,n;
	cin>>n>>k;
	bool the_first = true;
	int sum=0;
	for(int i=n-1;i>=2;i--)
	{
		if(ss(i))
		{
			if(k==0)break;
			k--;
			if(the_first)
			{
				cout<<i;
				the_first = false;
			}
			else
			{
				cout<<'+'<<i;
			}
			sum+=i;
		}
	}
	cout<<'='<<sum;
	return 0;
} 
