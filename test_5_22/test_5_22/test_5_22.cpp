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

//��˳���
void InitList_Sq(SqList &L)
{
	L.elem = (ElemType *)malloc(LIST_INIT_SIZE*sizeof(ElemType));
	if (!L.elem) cout << "�洢����ʧ��!" << endl;
	L.length = 0;
	L.listsize = LIST_INIT_SIZE;
}

//�ڵ�iλ�ò���Ԫ��e
void ListInsert_Sq(SqList &L, int i, ElemType e)
{
	int *newbase;
	if (i<1 || i>L.length + 1) cout << "λ�ô���!" << endl;
	if (L.length >= L.listsize)
	{
		newbase = (ElemType *)realloc(L.elem, (L.listsize + LISTINCREMENT)*sizeof(ElemType));
		if (!newbase) cout << "���·����ַ����!" << endl;
		L.elem = newbase;
		L.listsize += LISTINCREMENT;
	}
	int *p, *q;
	q = &(L.elem[i - 1]);
	for (p = &(L.elem[L.length - 1]); p >= q; --p)	//����iλ�ü����Ժ��Ԫ�غ���һ��λ��
		*(p + 1) = *p;
	*q = e;
	++L.length;
}

//ɾ����i��Ԫ��
void ListDelete_Sq(SqList &L, int i)
{
	if ((i<1) || (i>L.length)) cout << "ɾ��λ�ò��Ϸ�!" << endl;
	int *p, *q;
	p = &(L.elem[i - 1]);
	q = L.elem + L.length - 1;	//��ȡ���һ��Ԫ��λ��
	for (++p; p <= q; ++p)  *(p - 1) = *p;		//����iԪ���Ժ��λ�þ���ǰ��һ��λ��
	--L.length;
}

//���ҵ�iλ��Ԫ��
void LocatedElem_Sq(SqList L, ElemType e)
{
	int *p, i = 1;
	p = L.elem;
	while (i <= L.length && L.elem[i - 1] != e) ++i;
	if (i > L.length - 1) cout << "������Ԫ��" << e << endl;
	else
		cout << e << "��λ���ǣ�" << i << endl;
}

//�ϲ�����˳���
void MergeList_Sq(SqList &La, SqList &Lb, SqList &Lc)		//La��Lb��Ԫ�طǵݼ�����
{
	int *pa, *pb, *pc;
	int *pa_last, *pb_last;
	pa = La.elem;
	pb = Lb.elem;
	Lc.listsize = Lc.length = La.length + Lb.length;
	pc = Lc.elem = (ElemType *)malloc(Lc.listsize*sizeof(ElemType));
	if (!Lc.elem) cout << "�洢����ʧ��!" << endl;
	pa_last = La.elem + La.length - 1;		//La�����һ��Ԫ��λ��
	pb_last = Lb.elem + Lb.length - 1;		//Lb�����һ��Ԫ��λ��
	while (pa <= pa_last && pb <= pb_last)	//�鲢
	{
		if (*pa <= *pb) *pc++ = *pa++;
		else *pc++ = *pb++;
	}
	while (pa <= pa_last) *pc++ = *pa++;	//����La��ʣ��Ԫ��
	while (pb <= pb_last) *pc++ = *pb++;	//����Lb��ʣ��Ԫ��

}

//��ӡ˳���
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

	//����˳���La����������
	InitList_Sq(La);
	ListInsert_Sq(La, 1, 12);
	ListInsert_Sq(La, 2, 56);
	ListInsert_Sq(La, 3, 80);
	ListInsert_Sq(La, 4, 91);
	ListInsert_Sq(La, 5, 98);
	ListInsert_Sq(La, 6, 99);
	cout << "La��Ԫ��Ϊ��";
	PrintL(La);

	//����˳���Lb����������
	InitList_Sq(Lb);
	ListInsert_Sq(Lb, 1, 25);
	ListInsert_Sq(Lb, 2, 39);
	ListInsert_Sq(Lb, 3, 78);
	ListInsert_Sq(Lb, 4, 86);
	ListInsert_Sq(Lb, 5, 88);
	ListInsert_Sq(Lb, 6, 95);
	cout << "Lb��Ԫ��Ϊ��";
	PrintL(Lb);

	//�ϲ�La��Lb�е�Ԫ�ص�Lc�У��ǵݼ���
	MergeList_Sq(La, Lb, Lc);
	cout << "Lc��Ԫ��Ϊ��";
	PrintL(Lc);

	//��ȡLc��Ԫ��88��λ��
	cout << "Lc�У�";
	LocatedElem_Sq(Lc, 88);

	//ɾ��Lc��λ��5��Ԫ��
	cout << "Lc��ɾ����5λ��Ԫ�غ�";
	ListDelete_Sq(Lc, 5);
	PrintL(Lc);

	//��ֹ���н��һ������
	system("pause");
}
