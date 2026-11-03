#include "Utils.h"
#include "Stack.h"
#include <iostream>

void reverse(int* nums, unsigned int size)
{
    if (nums == nullptr || size == 0)
    {
        return;
    }

    Stack s;
    initStack(&s);

    for (unsigned int i = 0; i < size; i++)
    {
        push(&s, (unsigned int)nums[i]);
    }

    for (unsigned int i = 0; i < size; i++)
    {
        nums[i] = (int)pop(&s);
    }

    cleanStack(&s);
}

int* reverse10()
{
    int* nums = new int[10];

    std::cout << "Enter 10 integer numbers:" << std::endl;
    for (int i = 0; i < 10; i++)
    {
        std::cin >> nums[i];
    }

    reverse(nums, 10);

    return nums;
}