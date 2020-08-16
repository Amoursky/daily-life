#include "queue.h"

void QueueInit(Queue* pq)
{
	pq->front = pq->rear = pq->data;
	pq->size = 0;
}

void QueueDestor(Queue* pq)
{
	pq->front = pq->rear = pq->data;
	pq->size = 0;
}

void QueuePush(Queue* pq, QuDataType x)
{
	if (pq->size + 1 == QueueMAX)
	{
		return;
	}
	*pq->rear = x;
	pq->rear++;
	pq->size++;

	if (pq->rear - pq->data == QueueMAX)
	{
		pq->rear = pq->data;
	}
}

void QueuePop(Queue* pq)
{
	if (pq->size == 0)
	{
		return;
	}

	pq->front++;
	pq->size--;
	if (pq->front - pq->data == QueueMAX)
	{
		pq->front = pq->data;
	}
}