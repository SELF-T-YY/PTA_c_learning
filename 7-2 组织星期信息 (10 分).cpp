#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main()
{
	char *data[]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
	int n;
	cin>>n;
	while(n--)
	{
		int find_num = -1;
		char input[10];
		cin>>input;
		for(int i=0;i<7;i++)
		{
			if(strcmp(data[i],input)==0)
				find_num = i+1;
		}
		cout<<find_num<<'\n';
	}
	return 0;
}
