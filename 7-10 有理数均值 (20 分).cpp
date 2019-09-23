#include<bits/stdc++.h>
using namespace std;
int js(int a, int b)
{
	if(a%b==0)return b;
	return js(b,a%b);
}
int main()
{
	int n;
	cin>>n;
	int a1,a2,b1,b2;
	scanf("%d/%d",&a1,&b1);
	int sum1=0,sum2=0; 
	for(int i=1;i<n;i++)
	{
		scanf("%d/%d",&a2,&b2);
		if(a1 == 0)
		{
			sum1 = a2;
			sum2 = b2;
		}
		else
		{
			sum1=a1*b2+a2*b1;
			sum2=b1*b2;
		}
		if(sum1 == 0)
		{
			a1 = 0;
			b1 = 0;
			continue;
		}
		a1 = sum1;
		b1 = sum2;
	}
	if(sum1==0||sum2==0)
	{
		cout<<'0';
		return 0;
	}
	sum2*=n;
	int x;
	if(sum1<sum2) x = js(sum2, sum1);
	else x = js(sum1,sum2);
	sum1 /= x;
	sum2 /= x;
	if(sum2==1)cout<<sum1;
	else if(sum1==0||sum2==0)cout<<'0';
	else cout<<sum1<<'/'<<sum2;
	return 0;
}
