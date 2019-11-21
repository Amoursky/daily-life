#include"SList.h"

int main()
{
	SListNode *head;
	SListInit(&head);
	SListPushFront(&head, 8);
	SListPushFront(&head, 7);
	SListPushFront(&head, 6);
	SListPushFront(&head, 5);
	SListPushFront(&head, 4);
	SListPushFront(&head, 3);
	SListPushFront(&head, 2);
	SListPushFront(&head, 1);
	SListInsertAfter(SListFind(&head,6), 9);

	SListPrint(&head);
	system("pause");
	return 0;
}
