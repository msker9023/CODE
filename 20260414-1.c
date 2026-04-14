#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef char Elemtype;
typedef struct TreeNode
{
	Elemtype data;
	struct TreeNode* lchild;
	struct TreeNode* rchild;
}TreeNode;
typedef TreeNode* BiTree;
//线索二叉树
typedef struct ThreadNode
{
	Elemtype data;
	struct ThreadNode* lchild;
	struct ThreadNode* rchild;
	int ltag;
	int rtag;
}ThreadNode;
typedef ThreadNode* ThreadTree;
char str[] = { "ABDH##I##EJ###CF##G##" };
int idx = 0;
void createTree(ThreadTree* T)
{
	Elemtype ch;
	ch = str[idx++];
	if (ch == '#')
	{
		*T = NULL;
	}
	else
	{
		*T = (ThreadNode*)malloc(sizeof(ThreadNode));
		(*T)->data = ch;
		createTree(&(*T)->lchild);
		if ((*T)->lchild != NULL)
		{
			(*T)->ltag = 0;
		}
		createTree(&(*T)->rchild);
		{
			(*T)->rtag = 0;
		}
	}
}
//前序遍历
void preorder(BiTree T)
{
	if (T == NULL)
	{
		return;
	}
	printf("%c", T->data);
	preorder(T->lchild);
	preorder(T->rchild);
}
int main()
{
	ThreadTree head;
	ThreadTree T;
	createTree(&T);
	return 0;
}