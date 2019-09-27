#include<bits/stdc++.h>
#define Elemtype int
using namespace std;

typedef struct Node *List;
struct Node{
	Elemtype Data;
	Node *Next;
};
int main()
{	
	int k;
	scanf("%d",&k);
	List p = (List)malloc(sizeof(Node));
	p->Next = NULL;	
	while(true)
	{
		int n;
		scanf("%d",&n);
		if(n<0)break;
		List temp = (List)malloc(sizeof(Node));
		temp->Data = n;
		temp->Next = p;
		p = temp; 
	}
	k--;
	while(k-- && p->Next!=NULL)
		p = p->Next;
	if(p->Next != NULL)
		printf("%d",p->Data);
	else
		printf("NULL");
	return 0;
}
