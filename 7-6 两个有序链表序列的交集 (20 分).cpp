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
		if(n<0)break;		
		List temp = (List)malloc(sizeof(Node));
		temp->Data = n;
		temp->Next = NULL;
		p->Next = temp;
		p = temp;
	}
	return L->Next;
}

List add(List L1, List L2)
{
	List L3 = (List)malloc(sizeof(Node));
	L3->Next = NULL;
	List p = L3;
	List t1 = L1;
	List t2 = L2;
	while(t1&&t2)
	{
		if(t1->Data > t2->Data)
			t2 = t2->Next;
		else if(t1->Data < t2->Data)
			t1 = t1->Next;
		else
		{
			List temp = (List)malloc(sizeof(Node));
			temp->Data = t1->Data;
			temp->Next = p->Next;
			p->Next = temp;
			p = temp;
			t2 = t2->Next;
			t1 = t1->Next;
		}
	}
 	return L3;
}

void output(List L)
{
    L=L->Next;
    int k=0;
    while(L){
        if(k==0) printf("%d",L->Data);
        else printf(" %d",L->Data);
        k++; 
		L=L->Next;
    }
    if(k==0)printf("NULL");
  
}

int main()
{
	List L1 = input();
	List L2 = input();
	List L3 = add(L1, L2);
	output(L3);
	return 0;
}
