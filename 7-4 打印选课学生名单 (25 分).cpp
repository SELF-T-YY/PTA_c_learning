#include<bits/stdc++.h>
using namespace std;


struct node{
	char name[5];
}a[2510][40010];
int num[2510];

bool cmp(node a, node b)
{
	return strcmp(a.name,b.name)<0;
}

int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++)
	{
		char name[5];
		scanf("%s",name);
		int c;
		scanf("%d", &c);
		int id;
		for(int j=0;j<c;j++)
		{
			scanf("%d", &id);
			strcpy(a[id][num[id]++].name,name);
		}
	}	
	for(int i= 1;i<=k;i++)
		sort(a[i],a[i]+num[i],cmp);
	for(int i=1;i<=k;i++)
	{
		printf("%d %d\n", i,num[i]);
		for(int j=0;j<num[i];j++)
		{
			printf("%s\n",a[i][j].name);
		}
	}
	return 0;
}
