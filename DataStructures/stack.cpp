#include "Stack.h"
#include <iostream>

void initStack(Stack* s)
{
    if (s != nullptr)
    {
        initList(&(s->list));
    }
}

void cleanStack(Stack* s)
{
    if (s != nullptr)
    {
        freeList(&(s->list));
    }
}

void push(Stack* s, unsigned int element)
{
    if (s != nullptr)
    {
        insertFirst(&(s->list), element);
    }
}

int pop(Stack* s)
{
    if (s == nullptr)
    {
        return -1;
    }
    return removeFirst(&(s->list));
}

bool isEmpty(Stack* s)
{
    if (s == nullptr)
    {
        return true;
    }
    return isEmptyList(&(s->list));
}

bool isFull(Stack* s)
{
    return false;
}