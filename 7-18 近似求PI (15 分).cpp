#include<bits/stdc++.h>
using namespace std;
int main()
{
	double eps;
	scanf("%le", &eps);
	double pi=1;
	double temp=1;
	for(int i=1;temp>eps;i++)
	{
		temp = temp*i/(2*i+1);
		pi+=temp;
	}
	printf("PI = %.5lf",2*pi);
	return 0;
}
