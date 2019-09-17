#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	char a[110];
	char b[100]="qiao ben zhong.\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0";
	getchar();
	while(n--)
	{
		cin.getline(a,110);
		bool flag1=false,flag2=false;
		for(int i=0;i<strlen(a);i++)
		{
			if(a[i]==',')
				if(a[i-3]=='o'&&a[i-2]=='n'&&a[i-1]=='g')flag1=true;
			if(a[i]=='.')
				if(a[i-3]=='o'&&a[i-2]=='n'&&a[i-1]=='g')flag2=true;
		}
		if(flag1&&flag2)
		{
			int count = 3;
			for(int i=strlen(a)-1;i>0;i--)
			{
				if(a[i]==' ')count--;
				if(count==0)
				{
					i++;
					for(int j=0;j<strlen(b);j++)
					{
						a[i+j]=b[j];
						a[i+j+1]='\0';
					}
					break;
				}
			}
			for(int i=0;i<strlen(a);i++)
				cout<<a[i];
		}
		else cout<<"Skipped";
		if(n!=0)cout<<endl;
	}
	return 0;
}
