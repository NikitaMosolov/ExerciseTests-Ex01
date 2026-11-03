#include "LinkedList.h"
#include <iostream>

void initList(LinkedList* list)
{
    if (list != nullptr)
    {
        list->head = nullptr;
    }
}

void insertFirst(LinkedList* list, unsigned int value)
{
    if (list == nullptr) return;

    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = list->head;

    list->head = newNode;
}

int removeFirst(LinkedList* list)
{
    if (list == nullptr || list->head == nullptr)
    {
        return -1;
    }

    Node* temp = list->head;
    unsigned int val = temp->data;

    list->head = list->head->next;

    delete temp;
    return val;
}

bool isEmptyList(const LinkedList* list)
{
    if (list == nullptr) return true;
    return (list->head == nullptr);
}

void freeList(LinkedList* list)
{
    if (list == nullptr) return;

    while (!isEmptyList(list))
    {
        removeFirst(list);
    }
}