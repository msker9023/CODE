#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAXSIZE 100
typedef int Elementype;
//栈内存
typedef struct
{
	Elementype data[MAXSIZE];
	int length;
}Seqlist;
//堆内存
typedef struct
{
	Elementype* data;
	int length;
}SeqList;
//堆内存
SeqList* initlist()
{
	SeqList* L = (SeqList*)malloc(sizeof(SeqList));
	L->data = (Elementype)malloc(sizeof(Elementype) * MAXSIZE);
	L->length = 0;
	return L;
}
void initlist(Seqlist* L)
{
	L->length = 0;
}
//尾部添加元素
int applendElem(Seqlist* L, Elementype e)
{
	if (L->length >= MAXSIZE)
	{
		printf("已满");
		return 0;
	}
	L->data[L->length] = e;
	L->length++;
	return 1;
}
//输出
void listElem(Seqlist* L)
{
	for (int i = 0; i < L->length; i++)
	{
		printf("%d", L->data[i]);
	}
	printf("\n");
}
//插入
int insertElem(Seqlist* L, int pos, Elementype e)
{
	if (pos > L->length)
	{
		printf("插入失败");
		return 0;
	}
	if (pos <= L->length)
	{
		for (int i = L->length-1 ; i >= pos - 1; i--)
		{
			L->data[i + 1] = L->data[i];
		}
		L->data[pos-1] = e;
		L->length++;
	}
	return 1;
}
//删除
int deletElem(Seqlist* L, int pos, Elementype* e)
{
	*e = L->data[pos - 1];
	if (pos < L->length)
	{
		for (int i = pos; i <= L->length - 1; i++)
		{
			L->data[i - 1] = L->data[i];
		}
	}
	L->length--;
	return 1;
}
//查找
int findElem(Seqlist* L, Elementype e)
{
	for (int i = 0; i < L->length; i++)
	{
		if (L->data[i] == e)
			return i + 1;
	}
	return 1;
}
int main()
{
	Seqlist list;
	initlist(&list);
	applendElem(&list, 3);
	applendElem(&list, 6);
	applendElem(&list, 9);
	applendElem(&list, 2);
	insertElem(&list, 1, 4);
	listElem(&list);
	Elementype delet;
	deletElem(&list, 3, &delet);
	int fillout = findElem(&list, 3);
	printf("%d\n", fillout);
	listElem(&list);
	return 0;
}