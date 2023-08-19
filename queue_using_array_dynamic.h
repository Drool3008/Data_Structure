//
// Created by DhawalP on 19/08/23.
//

#ifndef DATA_S_QUEUE_USING_ARRAY_DYNAMIC_H
#define DATA_S_QUEUE_USING_ARRAY_DYNAMIC_H

#endif //DATA_S_QUEUE_USING_ARRAY_DYNAMIC_H
#include "queue_using_array.h"
template <typename P>
class DynamicQueue{
    int cap;
    int size;
    P *arr;
    int firstIndex;
    int nextIndex;
public:
    DynamicQueue()
    {
        size=0;
        cap=4;
        arr=new P[4];
        firstIndex=-1;
        nextIndex=0;
    }
    DynamicQueue(int capacity)
    {
        size=0;
        cap=capacity;
        arr=new P[cap];
        firstIndex=-1;
        nextIndex=0;
    }
    void push(P elem)
    {
        if(size==cap)
        {
            P* newarr =new P[2*cap];
            for(int i=firstIndex;i<cap;i++)
            {
                newarr[i]=arr[i];
            }
            delete []arr;
            arr=newarr;
            cap*=2;
        }
        if(firstIndex==-1)
        {
            firstIndex++;
        }
        arr[nextIndex]=elem;
        nextIndex++;
        size++;
    }
    void pop()
    {
        if(!size)
        {
            std::cout<<"\nQueue Empty\n";
            return;
        }
        firstIndex++;
        size--;
    }
    int getsize()
    {
        return size;
    }
    P top()
    {
        if(isempty())
        {
            std::cout<<"\nQueue Empty\n";
            return 0;
        }
        return arr[firstIndex];
    }
    bool isempty()
    {
        return size==0;
    }
    int getcap()
    {
        return cap;
    }
};