#include<stdio.h>
#include<iostream>
using namespace std;

#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10
#define ElemType int

typedef struct{
	ElemType *elem;
	int length;
	int listsize;
}SqList;

//建顺序表
void InitList_Sq(SqList &L)
{
	L.elem = (ElemType *)malloc(LIST_INIT_SIZE*sizeof(ElemType));
	if (!L.elem) cout << "存储分配失败!" << endl;
	L.length = 0;
	L.listsize = LIST_INIT_SIZE;
}

//在第i位置插入元素e
void ListInsert_Sq(SqList &L, int i, ElemType e)
{
	int *newbase;
	if (i<1 || i>L.length + 1) cout << "位置错误!" << endl;
	if (L.length >= L.listsize)
	{
		newbase = (ElemType *)realloc(L.elem, (L.listsize + LISTINCREMENT)*sizeof(ElemType));
		if (!newbase) cout << "重新分配地址错误!" << endl;
		L.elem = newbase;
		L.listsize += LISTINCREMENT;
	}
	int *p, *q;
	q = &(L.elem[i - 1]);
	for (p = &(L.elem[L.length - 1]); p >= q; --p)	//将第i位置及其以后的元素后移一个位置
		*(p + 1) = *p;
	*q = e;
	++L.length;
}

//删除第i的元素
void ListDelete_Sq(SqList &L, int i)
{
	if ((i<1) || (i>L.length)) cout << "删除位置不合法!" << endl;
	int *p, *q;
	p = &(L.elem[i - 1]);
	q = L.elem + L.length - 1;	//获取最后一个元素位置
	for (++p; p <= q; ++p)  *(p - 1) = *p;		//将第i元素以后的位置均向前移一个位置
	--L.length;
}

//查找第i位置元素
void LocatedElem_Sq(SqList L, ElemType e)
{
	int *p, i = 1;
	p = L.elem;
	while (i <= L.length && L.elem[i - 1] != e) ++i;
	if (i > L.length - 1) cout << "不存在元素" << e << endl;
	else
		cout << e << "的位置是：" << i << endl;
}

//合并两个顺序表
void MergeList_Sq(SqList &La, SqList &Lb, SqList &Lc)		//La和Lb的元素非递减排列
{
	int *pa, *pb, *pc;
	int *pa_last, *pb_last;
	pa = La.elem;
	pb = Lb.elem;
	Lc.listsize = Lc.length = La.length + Lb.length;
	pc = Lc.elem = (ElemType *)malloc(Lc.listsize*sizeof(ElemType));
	if (!Lc.elem) cout << "存储分配失败!" << endl;
	pa_last = La.elem + La.length - 1;		//La的最后一个元素位置
	pb_last = Lb.elem + Lb.length - 1;		//Lb的最后一个元素位置
	while (pa <= pa_last && pb <= pb_last)	//归并
	{
		if (*pa <= *pb) *pc++ = *pa++;
		else *pc++ = *pb++;
	}
	while (pa <= pa_last) *pc++ = *pa++;	//插入La的剩余元素
	while (pb <= pb_last) *pc++ = *pb++;	//插入Lb的剩余元素

}

//打印顺序表
void PrintL(SqList &L)
{
	int i = 0;
	while (i < L.length)
	{
		cout << L.elem[i] << " ";
		i++;
	}
	cout << endl;
}

void main()
{

	SqList La, Lb, Lc;

	//创建顺序表La并插入数据
	InitList_Sq(La);
	ListInsert_Sq(La, 1, 12);
	ListInsert_Sq(La, 2, 56);
	ListInsert_Sq(La, 3, 80);
	ListInsert_Sq(La, 4, 91);
	ListInsert_Sq(La, 5, 98);
	ListInsert_Sq(La, 6, 99);
	cout << "La的元素为：";
	PrintL(La);

	//创建顺序表Lb并插入数据
	InitList_Sq(Lb);
	ListInsert_Sq(Lb, 1, 25);
	ListInsert_Sq(Lb, 2, 39);
	ListInsert_Sq(Lb, 3, 78);
	ListInsert_Sq(Lb, 4, 86);
	ListInsert_Sq(Lb, 5, 88);
	ListInsert_Sq(Lb, 6, 95);
	cout << "Lb的元素为：";
	PrintL(Lb);

	//合并La，Lb中的元素到Lc中（非递减）
	MergeList_Sq(La, Lb, Lc);
	cout << "Lc的元素为：";
	PrintL(Lc);

	//获取Lc中元素88的位置
	cout << "Lc中：";
	LocatedElem_Sq(Lc, 88);

	//删除Lc中位置5的元素
	cout << "Lc中删除第5位置元素后：";
	ListDelete_Sq(Lc, 5);
	PrintL(Lc);

	//防止运行结果一闪而过
	system("pause");
}
