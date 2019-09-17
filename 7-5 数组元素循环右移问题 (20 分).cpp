#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x;
	cin>>n>>x;
	int t;
	bool flag=false;
	for(int i=0;i<n;i++)
	{
		cin>>t;
		if(t==x)
		{
			flag=true;
			cout<<i;
			break;
		}
	}
	if(!flag)cout<<"Not Found";
	return 0;
}
