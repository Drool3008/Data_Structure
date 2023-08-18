//
// Created by DhawalP on 18/08/23.
//

#ifndef DATA_S_TEMPLATE_STACK_H
#define DATA_S_TEMPLATE_STACK_H

#endif //DATA_S_TEMPLATE_STACK_H
#include "Stack.h"
template<typename v>
class _Stack{
private:
    int nextI;
    v* arr;
    int cap;
public:
    _Stack()
    {
        nextI=0;
        arr=new v[4];
        cap=4;
    }
    int size()
    {
        return nextI-1;
    }
    bool isEmpty()
    {
        return nextI==0;
    }
    v top()
    {
        if(isEmpty())
        {
            std::cout<<"\nStack Empty\n";
            return 0;
        }
        return arr[nextI-1];
    }
    void push(v d) {
        if (nextI == cap)
        {
            v* newarr=new v[2*cap];
            for(int i=0;i<cap;i++)
            {
                newarr[i]=arr[i];
            }
            delete []arr;
            arr=newarr;
            cap*=2;
        }
        arr[nextI]=d;
        nextI++;
    }
    v pop()
    {
        if(isEmpty()) return 0;
        return arr[nextI--];
    }

};
