#ifndef _SLIST_H_
#define _SLIST_H_
#include<stdio.h>
#include<stdlib.h>

typedef int SLTDataType;

typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
}SListNode;

void SListInit(SListNode** pphead);
void SListDestory(SListNode** pphead);
SListNode* BuySListNode(SLTDataType x);
void SListPushFront(SListNode** pphead, SLTDataType x);
void SListPopFront(SListNode** pphead); 
SListNode* SListFind(SListNode** pphead, SLTDataType x);
void SListRemove(SListNode** pphead, SLTDataType x);
void SListPrint(SListNode** pphead);
void SListInsertAfter(SListNode* pos, SLTDataType x);
void SListEraseAfter(SListNode* pos);

#endif //_SLIST_H_