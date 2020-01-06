#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef char TElemType;
typedef int Status;
typedef struct BiTNode
{
	TElemType data;
	struct BiTNode *lchild, *rchild; //左右孩子指针 
}BiTNode,*BiTree;

BiTNode* CreateBiTree(TElemType* a,Status* n)   //二叉树的建立
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
		printf("数据结构总结\n");
	if (*a == 'B')
		printf("线性表\n");
	if (*a == 'C')
		printf("树");
	if (*a == 'D')
		printf("线性表的顺序表示和实现\n");
	if (*a == 'E')
		printf("线性表的链式表示和实现\n");
	if (*a == 'F')
		printf("二叉树的性质和存储结构\n");
	if (*a == 'G')
		printf("二叉树的遍历\n");
	if (*a == 'H')
		printf("线性表的顺序存储表示\n");
	if (*a == 'I')
		printf("顺序表中的基本操作的实现\n");
	if (*a == 'J')
		printf("单链表的定义和表示\n");
	if (*a == 'K')
		printf("单链表的基本操作实现\n");
	if (*a == 'L')
		printf("二叉树的性质\n");
	if (*a == 'M')
		printf("二叉树的存储结构\n");
}

void PreQrderTraverse(BiTree * T)   //前序遍历
{
	if (*T == NULL)
	{
		return;
	}
	BiTreePrintf(&((*T)->data));
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
	BiTreePrintf(&((*T)->data));
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
	BiTreePrintf(&((*T)->data));
}



int main()
{
	Status num = 0;
	char a[] = "ABDH##I##EJ##K##CFL##M##G##";
	BiTNode* root = CreateBiTree(a,&num);
	printf("前序遍历结果:\n");
	PreQrderTraverse(&root);
	printf("\n");
	printf("中序遍历结果:\n");
	InOrderTraverse(&root);
	printf("\n");
	printf("后续遍历结果:\n");
	PostOrderTraverse(&root);
	printf("\n");
	system("pause");
	return 0;
}
