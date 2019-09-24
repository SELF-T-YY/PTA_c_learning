#include<bits/stdc++.h>
#define Elemtype int
#define Posistion int
using namespace std;

struct Node{
	Elemtype Data;
	Node *Nextpath;
};

typedef struct Node *List;

List input()
{
	List L = (List)malloc(sizeof(Node));
	int x;
	cin>>x;
	L->Data = x;
	L->Nextpath = NULL;

	List p = L;
	List temp = (List)malloc(sizeof(List));
	while(true)
	{
		cin>>x;
		if(x==-1)break;
		temp->Data = x;
		temp->Nextpath = p;
	}
	return temp;
}

List find(List L, Posistion k)
{
	List p = L;
	for(int i=0;i<k;i++)
	{
		if(p->Nextpath == NULL)break;
		p = p->Nextpath;
	}
	if(p->Nextpath == NULL)cout<<"NULL";
	else
		cout<<p->Data;
}

int main()
{
	int k;
	cin>>k;
	List L = input();
	find(L,k);
	return 0;
}
