#include"seqlist.h"

void SeqListInit(SeqList* psl, size_t capacity)
{
	psl->array = (SLDataType*)calloc(capacity , sizeof(SLDataType));
	psl->capacity = capacity;
	psl->size = 0;
}

void SeqListDestory(SeqList* psl)
{
	if (psl->array)
	{
		free(psl->array);
		psl->array = NULL;
		psl->size = 0;
		psl->capacity = 0;
	}
}

void SeqListPrint(SeqList* psl)
{
	int i = 0;
	for (i = 0; i < (psl->size); i++)
	{
		printf("%d ",psl->array[i]);
	}
	printf("\n");
}

void CheckCapacity(SeqList* psl)
{
	if (psl->size >= psl->capacity)
	{
		psl->capacity *= 2;
		psl->array = (SLDataType*)realloc(psl->array, psl->capacity * sizeof(SLDataType));
	}
}

void SeqListPushBack(SeqList* psl, SLDataType x)
{
	CheckCapacity(psl);
	psl->array[psl->size] = x;
	psl->size++;
}

void SeqListPopBack(SeqList* psl)
{
	psl->size--;
}

void SeqListPushFront(SeqList* psl, SLDataType x)
{
	CheckCapacity(psl);
	int i = 0;
	for (i = psl->size - 1; i >= 0; i--)
	{
		psl->array[i + 1] = psl->array[i];
	}
	psl->array[0] = x;
	psl->size++;
}

void SeqListPopFront(SeqList* psl)
{
	int i = 0;
	for (i = 0; i < psl->size - 1; i++)
	{
		psl->array[i] = psl->array[i + 1];
	}
	psl->size--;
}

int SeqListFind(SeqList* psl, SLDataType x)
{
	int i = 0;
	for (i = 0; i <= psl->size; i++)
	{
		if (psl->array[i] == x)
		{
			return i;
		}
	}
	return -1;
}

void SeqListInsert(SeqList* psl, int pos, SLDataType x)
{
	CheckCapacity(psl);
	int i = 0;
	for (i = psl->size - 1; i >= pos; i--)
	{
		psl->array[i + 1] = psl->array[i];
	}
	psl->array[pos] = x;
	psl->size++;
}

void SeqListErase(SeqList* psl, int pos)
{
	int i = 0;
	for (i = pos; i < psl->size - 1; i++)
	{
		psl->array[i] = psl->array[i + 1];
	}
	psl->size--;
}

void SeqListRemove(SeqList* psl, SLDataType x)
{
	SeqListErase(psl, SeqListFind(psl, x));
}

void SeqListModify(SeqList* psl, size_t pos, SLDataType x)
{
	psl->array[pos] = x;
}

void SeqListBubbleSort(SeqList* psl)
{
	int i = 0, j = 0;
	SLDataType tmp;
	for (i = 0; i < psl->size - 1; i++)
	{
		for (j = 0; j < psl->size - 1 - i; j++)
		{
			if (psl->array[j] > psl->array[j + 1])
			{
				tmp = psl->array[j];
				psl->array[j] = psl->array[j + 1];
				psl->array[j + 1] = tmp;
			}
		}
	}
}

int SeqListBinartFind(SeqList* psl, SLDataType x)
{
	int start = 0;
	int end = psl->size - 1;
	int mid = 0;
	while (start <= end)
	{
		mid = (start + end) / 2;
		if (psl->array[mid] < x)
		{
			start = mid + 1;
		}
		else if (psl->array[mid] > x)
		{
			end = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}