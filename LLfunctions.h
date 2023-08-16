//
// Created by DhawalP on 16/08/23.
//

#ifndef DATA_S_LLFUNCTIONS_H
#define DATA_S_LLFUNCTIONS_H
#include "LinkedList.h"
#endif //DATA_S_LLFUNCTIONS_H
class LLfunc{
public:
    static LNode* take_Input_h()
    {
        int d;
        LNode* head=NULL;
        LNode* tail=NULL;
        std::cin>>d;
        if(d==-1)
        {
            return head;
        }
        while(d!=-1)
        {
            LNode* n=new LNode(d);
            if(!head)
            {
                head=n;
                tail=n;
            }
            else
            {
                tail->next=n;
                tail=n;
            }
            std::cin>>d;
        }
        return head;
    }
    static LNode* take_Input_t()
    {
        LNode* head=NULL;
        LNode* tail=NULL;
        int d;
        std::cin>>d;
        if(d==-1)
        {
            return head;
        }
        while(d!=-1)
        {
            LNode* n =new LNode(d);
            if(!head)
            {
                head=n;
                tail=n;
            }
            else {
                n->next = head;
                head = n;
            }
            std::cin>>d;
        }
        return head;
    }
    static int length(LNode *head)
    {
        LNode* temp=head;
        int c=0;
        while(temp)
        {
            temp=temp->next;
            c++;
        }
        return c;
    }
    static void print_i(LNode* head,int pos)
    {
        LNode* temp=head;
        int c=0;
        if(pos<0)
        {
            std::cout<<"\nIndex out of range\n";
            return;
        }
        while(temp)
        {
            if(c==pos)
            {
                std::cout<<temp->data<<"\n";
                return;
            }
            temp=temp->next;
            c++;
        }
        std::cout<<"\nIndex out of range\n";
    }
    static void insert_at_i(LNode*head,int d,int pos)
    {
        LNode* temp=head;
        if(pos<0 || pos>length(head))
        {
            std::cout<<"\nIndex out of range\n";
            return;
        }
        LNode *n=new LNode(d);
        if(pos==0)
        {
            n->next=head;
            head=n;
            return;
        }
        else
        {
            for(int j=1;j<=pos-1;j++)
            {
                temp=temp->next;
            }
            n->next=temp->next;
            temp->next=n;
        }
    }
    static LNode* delete_i_node_memory_leak(LNode* head,int pos)
    {
        if(pos<0) return head;
        if(pos==0 && head) return head->next;
        LNode* curr=head;
        int c=1;
        while(c<=pos-1 && curr)
        {
            curr=curr->next;
            c++;
        }
        if(curr && curr->next)
        {
            curr->next=curr->next->next;
            return head;
        }
        return head;
    }static LNode* delete_i_node(LNode* head,int pos)
    {
        if(pos<0) return head;
        if(pos==0 && head)
        {
            LNode*t=head->next;
            delete head;
            return t;
        }
        LNode* curr=head;
        int c=1;
        while(c<=pos-1 && curr)
        {
            curr=curr->next;
            c++;
        }
        if(curr && curr->next)
        {
            LNode*t=curr->next;
            curr->next=t->next;
            delete t;
            return head;
        }
        return head;
    }
};