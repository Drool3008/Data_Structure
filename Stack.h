//
// Created by DhawalP on 18/08/23.
//

#ifndef DATA_S_STACK_H
#define DATA_S_STACK_H
#include "Leetcodefunc.h"
#endif //DATA_S_STACK_H
class Stack
{
    int *arr;
    int capacity;
    int nextI;
public:
    Stack ()
    {
        arr =new int[4];
        capacity=4;
        nextI=0;
    }
    int size()
    {
        return nextI;
    }
    bool isEmpty()
    {
        return nextI==0;
    }
    void push(int d)
    {
        if(nextI==capacity)
        {
            int *newArr=new int[2*capacity];
            for(int i=0;i<capacity;i++)
            {
                newArr[i]=arr[i];
            }
            delete []arr;
            arr=newArr;
            capacity*=2;
        }
        arr[nextI]=d;
        nextI++;
    }
    int top()
    {
        if(isEmpty())
        {
            std::cout<<"\nStack Empty\n";
            return INT_MAX;
        }
        return arr[nextI-1];
    }
    int pop()
    {
        if(isEmpty())
        {
            std::cout<<"\nStack Empty\n";
            return INT_MAX;
        }
        return nextI--;
    }
};