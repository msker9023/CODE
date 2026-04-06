#include<stdio.h>
#include<stdlib.h>
typedef int Elemtype;
typedef struct node
{
	Elemtype data;
	struct node* next;
}Node;
Node* initlist()
{
	Node* head = (Node*)malloc(sizeof(Node));
	head->data = 0;
	head->next = NULL;
	return head; 
}
int inserthead(Node* L, Elemtype e)
{
	Node* p = (Node*)malloc(sizeof(Node));
	p->data = e;
	p->next = L->next;
	L->next = p;
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
Node* inserttail(Node* tail, Elemtype e)
{
	Node* p = (Node*)malloc(sizeof(Node));
	p->data = e;
	tail->next= p;
	p->next = NULL;
	return p;
}
int insertNode(Node* L, int pos, Elemtype e)
{
	Node* p = L;
	int i = 0;
	while (i < pos - 1)
	{
		p = p->next;
		i++;
			if (p == NULL)
			{
				return 0;
			}
	}
	Node* q = (Node*)malloc(sizeof(Node));
	q->data = e;
	q->next = p->next;
	p->next = q;
	return 1;
}
void listNode(Node* L)
{
	Node* p = L->next;
	while (p != NULL)
	{
		printf("%d\n", p->data);
		p = p->next;
	}
}
int deleteNode(Node* L, int pos)
{
	Node* p = L;
	int i = 0;
	while (i < pos - 1)
	{
		p = p->next;
		i++;
		if (p == NULL)
		{
			return 0;
		}
	}
	if (p->next == NULL)
	{
		printf("删除位置为空");
		return 0;
	}
	//q指向要删除的节点
	Node* q = p->next;
	//让要删除节点的前驱指向要删除节点的后继
	p->next = q->next;
	//删除要删除的节点
	free(q);
	return 1;
}
int  search_numberNode(Node* L, int tag)
{
	int count = 1;
	Node* p = L->next;
	while (p!= NULL)
	{
		if (p->data == tag)
			return count;
		p = p->next;
		count++;
	}
	return 0;
}
int main()
{
	Node* list = initlist();
	inserthead(list, 10);
	inserthead(list, 20);
	inserthead(list, 30);
	insertNode(list, 2, 50);
	Node* tail = get_tail(list);
	/*deleteNode(list, 2);*/
	inserttail(tail, 40);
	int pos = search_numberNode(list, 20);
	printf("%d\n", pos);
	listNode(list);
	return 0;
}