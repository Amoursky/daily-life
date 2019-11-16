#include"seqlist.h"

//int i;

int main()
{
	SeqList test;
	SeqListInit(&test,100);
	SeqListPushBack(&test, 1);
	SeqListPushBack(&test, 2);
	SeqListPushBack(&test, 3);
	SeqListPushBack(&test, 4);
	SeqListPushBack(&test, 5);
	SeqListPushBack(&test, 6);
	SeqListPushBack(&test, 7);
	SeqListPushBack(&test, 8);
	//SeqListPushFront(&test, 8);
	//SeqListPushFront(&test, 9);
	//SeqListPushFront(&test, 10);
	//SeqListPopBack(&test);
	//SeqListPopBack(&test);
	//SeqListPopFront(&test);
	//SeqListPopFront(&test);
	//SeqListPopFront(&test);
	//SeqListPopFront(&test);
	SeqListInsert(&test, 0, 10);
	SeqListErase(&test, 0);



	SeqListPrint(&test);
	SeqListDestory(&test);
	system("pause");
	return 0;
}
