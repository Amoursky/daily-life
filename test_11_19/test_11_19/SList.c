#include"SList.h"

SListNode* BuySListNode(SLTDataType x)
{
	SListNode* res = (SListNode*)malloc(sizeof(SListNode));
	res->data = x;
	res->next = NULL;
	return res;
}

void SListInit(SListNode** pphead)
{
	*pphead = BuySListNode((SLTDataType)0);
}

void SListPushFront(SListNode** pphead, SLTDataType x)
{
	SListNode* tmp;
	tmp = BuySListNode(x);
	tmp->next = *pphead;
	*pphead = tmp;
}

void SListPopFront(SListNode** pphead)
{
	SListNode* tmp = (*pphead)->next;
	if (*pphead == NULL)
	{
		return;
	}
	free(*pphead);
	*pphead = tmp;
}
void SListInsertAfter(SListNode* pos, SLTDataType x)
{
	SListNode* tmp = BuySListNode(x);
	tmp->next = pos->next;
	pos->next = tmp;
}

void SListEraseAfter(SListNode* pos)
{
	SListNode* tmp = pos->next;
	if (tmp == NULL)
	{
		return;
	}
	pos->next = tmp->next;
	free(tmp);
}

void SListPrint(SListNode** pphead)
{
	SListNode* tmp = *pphead;
	//while (tmp)
	//{
	//	printf("%d ", tmp->data);
	//	tmp = tmp->next;
	//}
	for (tmp = *pphead; tmp; tmp = tmp->next)
	{
		printf("%d ", tmp->data);
	}
	printf("\n");
}

SListNode* SListFind(SListNode** pphead, SLTDataType x)
{
	SListNode* tmp = *pphead;
	//while (tmp)
	//{
	//	if (tmp->data == x)
	//	{
	//		return tmp;
	//	}
	//	tmp = tmp->next;
	//}
	for (tmp = *pphead; tmp; tmp = tmp->next)
	{
		if (tmp->data == x)
		{
			return tmp;
		}
	}
	return NULL;
}

void SListRemove(SListNode** pphead, SLTDataType x)
{
	SListNode* tmp;
	for (tmp = *pphead; tmp; tmp = tmp->next)
	{
		if (tmp->data == x)
		{
			SListEraseAfter(tmp);
		}
	}
}