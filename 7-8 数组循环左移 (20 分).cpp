#include<bits/stdc++.h>
using namespace std;

typedef struct Node{
	int Data;
	Node *Next;
}* List;


int n;

List input()
{
	List L = (List)malloc(sizeof(Node));
	L->Next = NULL;
	List p = L;
	int x;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&x);
		List temp = (List)malloc(sizeof(Node));
		temp->Data = x;
		temp->Next = NULL;
		p->Next = temp;
		p = temp;	
	}
	p->Next = L->Next;
	return L->Next;
}

//List move(List L,int m)
//{
//	m--;
//	while(m--)
//	{
//		L = L->Next;
//	}
//	return L->Next;
//}

void output(List L,int m)
{
    int k=0;
    while(m--)
		L = L->Next;
    while(n--){
        if(k==0) printf("%d",L->Data);
        else printf(" %d",L->Data);
        k++; 
		L=L->Next;
    }
    if(k==0)printf("NULL");
}


int main()
{
	int m;
	scanf("%d %d",&n,&m);
	List L1 = input();
//	L1 = move(L1,m);
	output(L1,m);
	return 0;
}
