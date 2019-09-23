#include<bits/stdc++.h>
using namespace std;
double a1,a2,b1,b2;
void prt(double a,double b)
{
//	if(a>=0.049||a<=-0.049) printf("%.1lf",a);
//	if(b>=0.049||b<=-0.049)
//	{
//		if(b>=0.049&&(a>=0.049||a<=-0.049))cout<<'+';
//		printf("%.1lfi",b);
//	}
//	if(a<=0.049&&a>=-0.049&&b<=0.049&&b>=-0.049)printf("0.0");
	if ((a >= -0.05 && a <= 0.05) && (b >= -0.05 && b <= 0.05))
	{
		printf("0.0\n");
	}
	else if ((a > -0.05 && a < 0.05))
	{
		printf("%.1lfi\n", b);
	}
	else if ((b >= -0.05 && b <= 0.05))
	{
		printf("%.1lf\n", a);
	}
	else
	{
		printf("%.1lf", a);
		if (b > 0)printf("+%.1lfi\n", b);
		else printf("%.1lfi\n", b);
	}
}

void pr(char c)
{
	if (b1 >= 0.049 && (b2 >=0.049))
        printf("(%.1lf+%.1lfi) %c (%.1lf+%.1lfi) = ", a1, b1, c, a2, b2);
    else if ((b1 >= 0.049) && (b2 < 0.049))
        printf("(%.1lf+%.1lfi) %c (%.1lf%.1lfi) = ", a1, b1, c, a2, b2);
    else if ((b1<0.049) && (b2 >= 0.049))
        printf("(%.1lf%.1lfi) %c (%.1lf+%.1lfi) = ", a1, b1, c, a2, b2);
    else 
        printf("(%.1lf%.1lfi) %c (%.1lf%.1lfi) = ", a1, b1, c, a2, b2);
}

int main()
{
	scanf("%lf %lf %lf %lf", &a1, &b1, &a2, &b2);
	pr('+');
	double a = a1+a2;
	double b = b1+b2;
	prt(a,b);
	cout<<endl;
	pr('-');
	a=a1-a2;
	b=b1-b2;
	prt(a,b);
	cout<<endl;
	pr('*');
	a = a1*a2-b1*b2;
	b = a1*b2+a2*b1;
	prt(a,b);
	cout<<endl;
	pr('/');
	a = (a1*a2+b1*b2)/(a2*a2+b2*b2);
	b = (a2*b1-a1*b2)/(a2*a2+b2*b2);
	prt(a,b);
	cout<<endl;
	return 0;
}
