#include<stdio.h>
#include<stdlib.h>
#define Elemtype int
typedef struct node
{
	Elemtype data;
	struct node* next;
}Node;
Node* initNode()
{
	Node* L = (Node*)malloc(sizeof(Node));
	L->data = 0;
	L->next = NULL;
	return L;
}
//循环链表
//Node* initNode()
//{
//	Node* L = (Node*)malloc(sizeof(Node));
//	L->data = 0;
//	L->next = L;
//	return L;
//}
void insertNode(Node* L, int pos, Elemtype e)
{
	Node* p=L;
	for (int i = 0; i < pos - 1; i++)
	{
		p = p->next;
	}
	Node* q = (Node*)malloc(sizeof(Node));
	q->data = e;
	q->next = p->next;
	p ->next = q;
}
void listNode(Node* L)
{
	Node* p=L->next;
	while (p != NULL)
	{
		printf("%d\n", p->data);
		p = p->next;
	}
}
Node* get_tail(Node* L)
{
	Node* p = L;
	while (p->next != NULL)
	{
		p = p->next;
	}
	return p;
}
void inserttail(Node* L, Elemtype e)
{
	Node* tail = get_tail(L);
	Node* p = (Node*)malloc(sizeof(Node));
	p->data = e;
	p->next = NULL;
	tail->next = p;
}
//循环链表
//void inserttail(Node* L,Elemtype e)
//{
//	Node* tail = get_tail(L);
//	Node* p = (Node*)malloc(sizeof(Node));
//	p->data = e;
//	p->next = L;
//	tail->next = p;
//}
void findelementNode(Node* L,int tag)
{
	Node* p = L->next;
	int count = 1;
	while (p->data != tag)
	{
		count++;
		p = p->next;
	}
	printf("%d %d\n", tag, count);
}
void findnumberNode(Node* L, int tag)
{
	Node* p = L->next;
	int count = 1;
	while (tag != count)
	{
		count++;
		p = p->next;
	}
	printf("%d %d\n", tag, p->data);
}
void findfront(Node* L, int tag)
{
	Node* p = L->next;
	int count = 0;
	while (p->data != tag)
	{
		count++;
		p = p->next;
	}
	p = L->next;
	for (int i = 0; i < count-1; i++)
	{
		p = p->next;
	}
	printf("%d", p->data);
}
int main()
{
	Node* list = initNode();
	insertNode(list, 1, 3);
	insertNode(list, 1, 4);
	insertNode(list, 1, 5);
	insertNode(list, 1, 6);
	Node* tail = get_tail(list);
	inserttail(list,8);
	listNode(list);
	findfront(list, 5);
	//findelementNode(list, 5);
	//findnumberNode(list, 3);
	return 0;
}