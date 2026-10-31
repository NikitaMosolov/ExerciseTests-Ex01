#ifndef QUEUE_H
#define QUEUE_H

typedef struct Queue
{
    unsigned int* elements; 
    unsigned int size;    
    unsigned int head;     
    unsigned int tail;    
    unsigned int count;
} Queue;

void initQueue(Queue* q, unsigned int size);
void cleanQueue(Queue* q);

void enqueue(Queue* q, unsigned int newValue);
int dequeue(Queue* q); 

bool isEmpty(Queue* s);
bool isFull(Queue* s);

#endif