//#include<stdio.h>
//#include<stdlib.h>
//#define MAXSIZE=100
//#define Elemtype int
//typedef struct node
//{
//	Elemtype data;
//	struct node* prev, * next;
//}Node;
//Node* initNode()
//{
//	Node* L = (Node*)malloc(sizeof(Node));
//	L->data = 0;
//	L->prev = NULL;
//	L->next = NULL;
//}
//int inserthead(Node* L, Elemtype e)
//{
//	Node* p = (Node*)malloc(sizeof(Node));
//	p->data = e;
//	p->prev = L;
//	p->next = L->next;
//	if (L->next != NULL)
//	{
//		L->next->prev = p;
//	}
//	L->next = p;
//	return 1;
//}
//int inserttail(Node* tail, Elemtype e)
//{
//	Node* p = (Node*)malloc(sizeof(Node));
//	p->data = e;
//	p->prev = tail;
//	tail->next = p;
//	p->next = NULL;
//	return p;
//}
//Node* get_tail(Node* L)
//{
//	Node* p = L;
//	while (p->next != NULL)
//	{
//		p = p->next;
//	}
//	return p;
//}
//void listNode(Node* L)
//{
//	Node* p = L->next;
//	while (p != NULL)
//	{
//		printf("%d\n", p->data);
//		p = p->next;
//	}
//}
//void insertNode(Node* L, int pos, Elemtype e)
//{
//	Node* p = L;
//	int count = 0;
//	while (count < pos - 1)
//	{
//		count++;
//		p = p->next;
//	}
//	Node* q = (Node*)malloc(sizeof(Node));
//	q->data = e;
//	q->prev = p;
//	q->next = p->next;
//	p->next->prev = q;
//	p->next = q;
//	return 1;
//}
//void deleteNode(Node* L, int tag)
//{
//	Node* p = L;
//	int count = 0;
//	while (count < tag - 1)
//	{
//		p = p->next;
//		count++;
//	}
//	Node* q = p->next;
//	p->next = q->next;
//	q->next->prev = p;
//	free(q);
//	return 1;
//}
//int main()
//{
//	Node* list = initNode();
//	inserthead(list, 3);
//	inserthead(list, 4);
//	inserthead(list, 5);
//	inserthead(list, 6);
//	inserthead(list, 7);
//	inserthead(list, 8);
//	Node* tail = get_tail(list);
//	inserttail(tail, 10);
//	insertNode(list,3, 9);
//	listNode(list);
//	return 0;
//}
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE=100
typedef int Elemtype;
typedef struct
{
	Elemtype data[MAXSIZE];
	int top;
}Stack;