#ifndef _QUEUE_H_
#define _QUEUE_H_
#include <stdio.h>

#define QueueMAX 100
typedef int QuDataType;

typedef struct Queue
{
	QuDataType data[QueueMAX];
	QuDataType* front;
	QuDataType* rear;
	size_t size;
}Queue;

void QueueInit(Queue* pq);
void QueueDestory(Queue* pq);
void QueuePush(Queue* pq, QuDataType x);
void QueuePop(Queue* pq);


#endif /*_QUEUE_H_*/

