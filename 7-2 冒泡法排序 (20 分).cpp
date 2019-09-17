#include<stdio.h>
int main()
{
	int n,k;
	int a[101]={0};
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	int temp;
	for(int i=0;i<k;i++)
	{
		for(int j=1;j<n-i;j++)
		{
			if(a[j-1]>a[j])
			{
				temp=a[j-1];
				a[j-1]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=0;i<n-1;i++)
		printf("%d ",a[i]);
	printf("%d",a[n-1]);
	return 0;
} 
