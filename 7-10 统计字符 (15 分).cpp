#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int l=0,b=0,d=0,o=0;
	for(int i=0;i<10;i++)
	{
		char t=getchar();
		if(t>='a'&&t<='z'||t>='A'&&t<='Z')l++;
		else if(t>='0'&&t<='9')d++;
		else if(t==' '||t=='\n')b++;
		else o++;
	}
	printf("letter = %d, blank = %d, digit = %d, other = %d",l,b,d,o);
//	letter = 4, blank = 3, digit = 2, other = 1

}
