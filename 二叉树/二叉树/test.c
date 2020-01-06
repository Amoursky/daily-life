#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef char TElemType;
typedef int Status;
typedef struct BiTNode
{
	TElemType data;
	struct BiTNode *lchild, *rchild; //���Һ���ָ�� 
}BiTNode,*BiTree;

BiTNode* CreateBiTree(TElemType* a,Status* n)   //�������Ľ���
{
	assert(a);
	TElemType ch;
	if (a[*n] == '#')
	{
		++(*n);
		return NULL;
	}
	else
	{
		BiTNode* root = (BiTNode*)malloc(sizeof(BiTNode));
		root->data = a[*n];
		++(*n);
		root->lchild = CreateBiTree(a, n);
		root->rchild = CreateBiTree(a, n);
		return root;
	}
	
}

void BiTreePrintf(TElemType* a)
{
	if (*a == 'A')
		printf("���ݽṹ�ܽ�\n");
	if (*a == 'B')
		printf("���Ա�\n");
	if (*a == 'C')
		printf("��");
	if (*a == 'D')
		printf("���Ա��˳���ʾ��ʵ��\n");
	if (*a == 'E')
		printf("���Ա����ʽ��ʾ��ʵ��\n");
	if (*a == 'F')
		printf("�����������ʺʹ洢�ṹ\n");
	if (*a == 'G')
		printf("�������ı���\n");
	if (*a == 'H')
		printf("���Ա��˳��洢��ʾ\n");
	if (*a == 'I')
		printf("˳����еĻ���������ʵ��\n");
	if (*a == 'J')
		printf("������Ķ���ͱ�ʾ\n");
	if (*a == 'K')
		printf("������Ļ�������ʵ��\n");
	if (*a == 'L')
		printf("������������\n");
	if (*a == 'M')
		printf("�������Ĵ洢�ṹ\n");
}

void PreQrderTraverse(BiTree * T)   //ǰ�����
{
	if (*T == NULL)
	{
		return;
	}
	BiTreePrintf(&((*T)->data));
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
	BiTreePrintf(&((*T)->data));
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
	BiTreePrintf(&((*T)->data));
}



int main()
{
	Status num = 0;
	char a[] = "ABDH##I##EJ##K##CFL##M##G##";
	BiTNode* root = CreateBiTree(a,&num);
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
