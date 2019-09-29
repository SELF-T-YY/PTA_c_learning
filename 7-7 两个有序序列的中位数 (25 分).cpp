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
	return L->Next;
}

void add(List L1, List L2)
{
	int count = 1;
	int ans=0;
	while(L1&&L2&&count<=n)
	{
		if(L1->Data > L2->Data)
		{
			
			if(count == n)
			{
				ans = L2->Data;
				cout<<ans;
			}
			L2 = L2->Next;
			count++;
		}
		else
		{
			if(count == n)
			{
				ans = L1->Data;
				cout<<ans;
			}
			count++;
			L1 = L1->Next;
		}
	}
	while(L1&&count<=n)
	{
		if(count == n)
		{
			ans = L1->Data;
			cout<<ans;
		}
		L1 = L1->Next;
		count++;
		
	}
	while(L2&&count<=n)
	{
		if(count == n)
		{
			ans = L2->Data;
			cout<<ans;
		}
		L2 = L2->Next;
		count++;
	}
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
	scanf("%d",&n);
	List L1 = input();
	List L2 = input();
	add(L1, L2);
//	output(L1);
	return 0;
}
