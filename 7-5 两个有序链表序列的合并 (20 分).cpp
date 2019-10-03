#include<bits/stdc++.h>
using namespace std;

typedef struct Node{
	int Data;
	Node *Next;
}* List;

List input()
{
	List L = (List)malloc(sizeof(Node));
	L->Next = NULL;
	List p = L;
	int n;
	while(true)
	{
		scanf("%d",&n);
		List temp = (List)malloc(sizeof(Node));
		temp->Data = n;
		temp->Next = NULL;
		p->Next = temp;
		p = temp;
		if(n<0)break;
	}
	return L->Next;
}

void add(List L1, List L2)
{
	bool flag = false;
	while(L1->Data != -1 && L2->Data != -1)
	{
		if(L2->Data > L1->Data)
		{
			flag = true;
			printf("%d",L1->Data);
			L1 = L1->Next;
		}
		else
		{
			flag = true;
			printf("%d",L2->Data);
			L2 = L2->Next;	
		}
		if(L1->Next != NULL || L2->Next != NULL)printf(" ");
	}
	while(L1->Data != -1)
	{
		flag = true;
		printf("%d",L1->Data);
		L1 = L1->Next;
		if(L1->Next != NULL || L2->Next != NULL)printf(" ");
	}
	
	while(L2->Data != -1)
	{	
		flag = true;
		printf("%d",L2->Data);
		L2 = L2->Next;
		if(L1->Next != NULL || L2->Next != NULL)printf(" ");
	}
	if(!flag)printf("NULL");
}

void output(List L)
{
	if(!L)cout<<"NULL";
	else
	{
		while(L)
		{
			cout<<L->Data<<' ';
			L = L->Next;
		}
	}
	return;
}
int main()
{
	List L1 = input();
	List L2 = input();
	add(L1, L2);
	return 0;
}
