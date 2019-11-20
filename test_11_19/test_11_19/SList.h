#ifndef _SLIST_H_
#define _SLIST_H_
typedef int SLTDateType;

typedef struct SListNode
{
	SLTDateType _data;
	struct SListNode* _next;
}SListNode;

#endif //_SLIST_H_