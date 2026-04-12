#include<stdio.h>
#define MAXSIZE 100
typedef int Elemtype;
typedef struct
{
	Elemtype data[MAXSIZE];
	int front;
	int rear;
}Quene;
void initQuene(Quene* Q)
{
	Q->front = 0;
	Q->rear = 0;
}
Elemtype dequene(Quene* Q)
{
	if (Q->front == Q->rear)
	{
		printf("空的\n");
		return 0;
	}
	Elemtype e = Q->data[Q->front];
	Q->front++;
	return e;
}
int quenefull(Quene* Q)
{
	if (Q->front > 0)
	{
		int step = Q->front;
		for (int i = Q->front; i <= Q->rear; i++)
		{
			Q->data[i - step] = Q->data[i];
		}
		Q->front = 0;
		Q->rear = Q->rear - step;
		return 1;
	}
	else
		return 0;
}
//int equene(Quene* Q, Elemtype e)
//{
//	if (Q->rear >= MAXSIZE)
//	{
//		if (!quenefull(Q))
//		{
//			return 0;
//		}
//	}
//	Q->data[Q->rear] = e;
//	Q->rear++;
//	return 1;
//}
//循环队列
int equene(Quene* Q, Elemtype e)
{
	if ((Q->rear + 1) % MAXSIZE == Q->front)
	{
		printf("满了\n");
		return 0;
	}
	Q->data[Q->rear] = e;
	Q->rear = (Q->rear + 1) % MAXSIZE;
	return 1;
}
int main()
{
	Quene* list;
	initQuene(list);
	return 0;
}