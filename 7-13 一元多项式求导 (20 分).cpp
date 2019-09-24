#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,n;
	bool flag = false;
	while(~scanf("%d %d",&x,&n))
	{
		if(n==0)continue;
		if(x*n != 0)
		{
			if(flag == 0)
			{
				cout<<x*n<<' '<<n-1;
				flag = true;
			}
			else cout<<' '<<x*n<<' '<<n-1;
		}
	}
	if(flag == 0) cout<<"0 0";
	return 0;
}
