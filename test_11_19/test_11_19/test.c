#include"SList.h"

int main()
{
	SListNode *head;
	SListInit(&head);
	SListPushFront(&head, 1);
	SListPushFront(&head, 2);

	SListPrint(&head);
	SListPrint(&head);
	system("pause");
	return 0;
}
