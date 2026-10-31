#include "queue.h"
#include <iostream>

void initQueue(Queue* q, unsigned int size)
{
    q->size = size;
    q->elements = new unsigned int[size];
    q->head = 0;
    q->tail = 0;
    q->count = 0;
}

void cleanQueue(Queue* q)
{
    if (q->elements != nullptr)
    {
        delete[] q->elements;
        q->elements = nullptr;
    }
    q->size = 0;
    q->head = 0;
    q->tail = 0;
    q->count = 0;
}

void enqueue(Queue* q, unsigned int newValue)
{
    if (isFull(q))
    {
        return;
    }
    q->elements[q->tail] = newValue;
    q->tail = (q->tail + 1) % q->size;
    q->count++;
}

    int dequeue(Queue* q)
{
    if (isEmpty(q))
    {
        return -1;
    }
    int val = q->elements[q->head];
    q->head = (q->head + 1) % q->size;
    q->count--;
    return val;
}

bool isEmpty(Queue* s)
{
    return (s->count == 0);
}

bool isFull(Queue* s)
{
    return (s->count == s->size);
}