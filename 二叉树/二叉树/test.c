#define OK 1
#define ERROR 0
#include<stdio.h>
#include<stdlib.h>
typedef char TElemType;
typedef int Status;
typedef struct BiTNode
{
	TElemType data;
	struct BiTNode *lchild, *rchild; //���Һ���ָ�� 
}BiTNode, *BiTree;

void CreateBiTree(BiTree * T)   //�������Ľ���
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
		CreateBiTree(&(*T)->lchild);    //����������
		CreateBiTree(&(*T)->rchild);    //����������
	}
}

void PreQrderTraverse(BiTree * T)   //ǰ�����
{
	if (*T == NULL)
	{
		return;
	}
	printf("%c ", (*T)->data);
	PreQrderTraverse(&(*T)->lchild);    //�����ȱ���������
	PreQrderTraverse(&(*T)->rchild);    //Ȼ���ڱ���������
}

void InOrderTraverse(BiTree * T)    //�������
{
	if (*T == NULL)
	{
		return;
	}
	InOrderTraverse(&(*T)->lchild);
	printf("%c ", (*T)->data);
	InOrderTraverse(&(*T)->rchild);
}


void PostOrderTraverse(BiTree * T)  //�������
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
	printf("ǰ��������:\n");
	PreQrderTraverse(&root);
	printf("\n");
	printf("����������:\n");
	InOrderTraverse(&root);
	printf("\n");
	printf("�����������:\n");
	PostOrderTraverse(&root);
	printf("\n");
	system("pause");
	return 0;
}
