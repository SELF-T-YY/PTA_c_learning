#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	if(a%b==0)return b;
	else return gcd(b,a%b);
}
int main()
{
	int a1,b1,a2,b2;
	scanf("%d/%d %d/%d",&a1,&b1,&a2,&b2);
	int a = (a1*b2)+(a2*b1);
	int b = b1*b2;
	if(a>b)
	{
		int x=gcd(a,b);
		if(a%b==0)cout<<a/b;
		else cout<<a/x<<'/'<<b/x;
	}
	else
	{
		int x = gcd(b,a);
		if(a%b==0)cout<<a/b;
		else cout<<a/x<<'/'<<b/x;
	}
	return 0;
} 
