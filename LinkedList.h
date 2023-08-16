//
// Created by DhawalP on 16/08/23.
//

#ifndef DATA_S_LINKEDLIST_H
#define DATA_S_LINKEDLIST_H

#endif //DATA_S_LINKEDLIST_H
#include "Vector.h"

class LNode{
public:
    int data;
    LNode* next;
    LNode(int data)
    {
        this->data=data;
        next=NULL;
    }

    static void print(LNode *head)
    {
        //LNode *temp=head;
        while(head)
        {
            std::cout<<head->data<<" ";
            head=head->next;
        }
        std::cout<<"\n";
    }
    static void print_add(LNode *&head)
    {
        while(head)
        {
            std::cout<<head->data<<" ";
            head=head->next;
        }
        std::cout<<"\n";
    }

};