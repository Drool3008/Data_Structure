//
// Created by DhawalP on 17/08/23.
//

#ifndef DATA_S_LEETCODEFUNC_H
#define DATA_S_LEETCODEFUNC_H

#endif //DATA_S_LEETCODEFUNC_H
#include "LLfunctions.h"
class Linked_List_Leetcode{
public:
    static int recursive_length(LNode* head)
    {
        if(!head) return 0;
        if(!head->next) return 1;
        return 1+ recursive_length(head->next);
    }
    static bool search_in_ll(LNode* head ,int d)
    {
        if(!head) return false;
        if(head->data==d) return true;
        return search_in_ll(head->next,d);
    }
    static int search_in_ll_index(LNode* head,int d,int c=0)
    {
        if(!head) return -1;
        if(head->data==d) return c;
        return search_in_ll_index(head->next,d,++c);
    }
    static void delete_middle_node(LNode* head)
    {
        if(!head) return;
        if(!head->next)
        {
            delete head;
            return;
        }
        LNode* slow=head;
        LNode* fast=head->next;
        LNode* n=NULL;
        while(fast && fast->next)
        {
            n=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        if(!fast)
        {
            LNode* m=slow->next;
            n->next=m;
            slow->next=NULL;
            delete slow;
            return;
        }
        if(!fast->next)
        {
            LNode* m=slow->next;
            slow->next=m->next;
            m->next=NULL;
            delete m;
            return;
        }
    }
    static LNode* reverse_List(LNode* head)
    {
        LNode* prev=NULL;
        LNode* curr=head;
        while(curr)
        {
            LNode* m=curr->next;
            curr->next=prev;
            prev=curr;
            curr=m;
        }
        return prev;
    }

};
