#include<bits/stdc++.h>
using namespace std;
int k=0;

typedef struct Node{
	int Data;
	Node *Next;
}node;

node * init()
{
	node *head,*q,*p;
	head=(node*)malloc(sizeof(node));
	head->Next=NULL;
	int a;
	cin>>a;
	p=(node*)malloc(sizeof(node));
	while(1)
	{
		cin>>a;
		if(a<0)break;
		p=(node*)malloc(sizeof(node));
		p->Data=a;
		p->Next=head->Next;
		head->Next=p;
	}
	return head;
}

void prt(node * p)
{
	node * t = p;
	for(int i=0;i<k;i++)
	{
		if(t->Next == NULL)break;
		t=t->Next;
	}
	if(t->Next == NULL)cout<<"NULL";
	else cout<<t->Data;
}

int main()
{
	cin>>k;
	node *p = init();
	prt(p);
	return 0;
}

