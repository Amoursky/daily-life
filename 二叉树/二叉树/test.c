#define OK 1
#define ERROR 0
#include<stdio.h>
#include<stdlib.h>
typedef char TElemType;
typedef int Status;
typedef struct BiTNode
{
	TElemType data;
	struct BiTNode *lchild, *rchild; //左右孩子指针 
}BiTNode, *BiTree;

void CreateBiTree(BiTree * T)   //二叉树的建立
{
	TElemType ch;
	scanf_s("%c", &ch);
	if (ch == '#')
	{
		*T = NULL;
	}
	else
	{
		*T = (BiTree)malloc(sizeof(BiTNode));
	}
	if (!*T)
	{
		return;
	}
	else
	{
		(*T)->data = ch;
		CreateBiTree(&(*T)->lchild);    //构造左子树
		CreateBiTree(&(*T)->rchild);    //构造右子树
	}
}

void PreQrderTraverse(BiTree * T)   //前序遍历
{
	if (*T == NULL)
	{
		return;
	}
	printf("%c ", (*T)->data);
	PreQrderTraverse(&(*T)->lchild);    //先序先遍历左子树
	PreQrderTraverse(&(*T)->rchild);    //然后在遍历右子树
}

void InOrderTraverse(BiTree * T)    //中序遍历
{
	if (*T == NULL)
	{
		return;
	}
	InOrderTraverse(&(*T)->lchild);
	printf("%c ", (*T)->data);
	InOrderTraverse(&(*T)->rchild);
}


void PostOrderTraverse(BiTree * T)  //后序遍历
{
	if (*T == NULL)
	{
		return;
	}
	PostOrderTraverse(&(*T)->lchild);
	PostOrderTraverse(&(*T)->rchild);
	printf("%c ", (*T)->data);
}

int main()
{
	BiTree root;
	printf("Enter the data :\n");
	CreateBiTree(&root);
	printf("PreQrderTraverse the data:\n");
	PreQrderTraverse(&root);
	printf("\n");
	printf("InOrderTraverse the data:\n");
	InOrderTraverse(&root);
	printf("\n");
	printf("PostOrderTraverse the data:\n");
	PostOrderTraverse(&root);
	printf("\n");
	system("pause");
	return 0;
}
