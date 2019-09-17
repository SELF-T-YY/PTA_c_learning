#include<bits/stdc++.h>
using namespace std;
int main()
{
	int sum=0;
	int n,t,minn=101,maxn=0;
	double adv=0.0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>t;
		sum+=t;
		if(t<minn)minn=t;
		if(t>maxn)maxn=t;
	}
	adv=1.0*sum/n;
	printf("average = %.2lf\n",adv);
	printf("max = %.2lf\n",maxn*1.0);
	printf("min = %.2lf",minn*1.0);
	return 0;
}
