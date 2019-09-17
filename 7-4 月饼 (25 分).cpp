#include<bits/stdc++.h>
using namespace std;
struct yue{
	double kucun;
	double vlue;
	double adv;
}a[1001];
bool cmp(yue a, yue b)
{
	return a.adv > b.adv;
}
int main()
{
	
	double n,d;
	cin>>n>>d;
	for(int i=0;i<n;i++)
		cin>>a[i].kucun;
	for(int i=0;i<n;i++)
	{
		cin>>a[i].vlue;
		a[i].adv=1.0*a[i].vlue/a[i].kucun;
	}
	
	sort(a,a+(int)n,cmp);
	
	double sum=0.0;
	
	for(int i=0;i<n;i++)
	{
		if(a[i].kucun<d)
		{
			sum+=a[i].vlue;
			d-=a[i].kucun;
		}
		else
		{
			sum+=1.0*a[i].adv*d;
			break;
		}
	}
	printf("%.2lf", sum);

	return 0;
}

