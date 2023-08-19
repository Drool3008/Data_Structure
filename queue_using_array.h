//
// Created by DhawalP on 19/08/23.
//

#ifndef DATA_S_QUEUE_USING_ARRAY_H
#include "Stack_Leetcode.h"
using namespace std;
#endif //DATA_S_QUEUE_USING_ARRAY_H
template <typename T>
class QUEUE{
    int NextIndex;
    int FirstIndex;
    int size;
    int capacity;
    T *arr;
public:
    QUEUE()
    {
        size=0;
        FirstIndex=-1;
        NextIndex=0;
        arr=new T[4];
        capacity=4;
    }
    QUEUE(int cap)
    {
        size=0;
        FirstIndex=-1;
        NextIndex=0;
        arr=new T[cap];
        capacity=cap;
    }
    int getsize()
    {
        return size;
    }
    void push(T elem)
    {
        if(size==capacity)
        {
           std::cout<<"\nQueue Full\n";
            return;
        }
        arr[NextIndex]=elem;
        if(FirstIndex==-1)
        {
            FirstIndex++;
        }
        NextIndex=(NextIndex+1)%capacity;
        size++;
    }
    void pop()
    {
        if(size==0)
        {
            std::cout<<"\nQueue empty\n";
            return;
        }
        FirstIndex=(FirstIndex+1)%capacity;
        size--;
        if(size==0)
        {
            FirstIndex=-1;
            NextIndex=0;
            size=0;
        }
    }
    bool isEmpty()
    {
        return size==0;
    }
    T front()
    {
        if(isEmpty())
        {
            std::cout<<"\nQueue Empty\n";
            return 0;
        }
        return arr[FirstIndex];
    }

};