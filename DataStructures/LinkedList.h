#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct Node
{
    unsigned int data;
    Node* next;
} Node;

typedef struct LinkedList
{
    Node* head;
} LinkedList;

void initList(LinkedList* list);
void insertFirst(LinkedList* list, unsigned int value);
int removeFirst(LinkedList* list);
bool isEmptyList(const LinkedList* list);
void freeList(LinkedList* list);

#endif