//
// Created by DhawalP on 18/08/23.
//

#ifndef DATA_S_STACK_USING_LL_H
#define DATA_S_STACK_USING_LL_H

#endif //DATA_S_STACK_USING_LL_H
#include "Template_Stack.h"
template <typename X>
class node{
public:
    node<X>*next;
    X data;
    node(X data)
    {
        this->data=data;
        next=NULL;
    }
};
template <typename T>
class StackLL
{
private:
    int count;
    node<T> *head;
public:

    StackLL()
    {
        head=NULL;
        count=0;
    }
    bool is_empty()
    {
        return count==0;
    }
    T* top()
    {
        if(is_empty())
        {
            std::cout<<"\nStack is empty\n";
            return 0;
        }
        return head->data;
    }
    int size()
    {
        return count;
    }
    void push(T d)
    {
        node<T> m =new node<T>(d);
        m->next=head;
        head=m;
        count++;
    }
    void pop()
    {
        if(is_empty()) return;
        node<T> m= head;
        head=head->next;
        delete m;
        count--;
    }

};