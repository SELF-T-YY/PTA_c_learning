#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int s[1001]={0};
	int a[1001]={0};
	for(int i=1;i<=1001;i++)
		a[i]=100;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>s[i];
	int count=1;
	int maxn=1;
	int ans[1001]={0};
	for(int i=1;i<=n;i++)
	{
		while(s[i]>a[count])
			count++;
		a[count]-=s[i];
		maxn = count>maxn?count:maxn;
		ans[i]=count;
		count=1;
	}
	for(int i=1;i<=n;i++)
		cout<<s[i]<<' '<<ans[i]<<endl;
	cout<<maxn;
	
	return 0;
} 
