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
	*pq->rear = x;
	pq->rear++;

	if (pq->rear - pq->data == QueueMAX)
	{
		pq->rear = pq->data;
	}
}