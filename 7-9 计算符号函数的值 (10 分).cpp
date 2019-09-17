#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n>0)printf("sign(%d) = 1",n);
    else if(n=0)printf("sign(0) = 0");
    else printf("sign(%d) = -1",n);
}
