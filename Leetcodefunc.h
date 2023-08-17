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
    static void delete_nth_from_last(LNode* head,int n)
    {
        LNode* fast=head;
        LNode* slow=head;
        while(n--)
        {
            fast=fast->next;
        }
        if(fast==NULL){
            LNode *m=head;
            slow=m->next;
            delete m;
            return;
        }
        while(fast->next)
        {
            slow=slow->next;
            fast=fast->next;
        }
        LNode* m=slow->next;
        slow->next=m->next;
        delete m;
    }

    static LNode* mergeTwoLists_recursion(LNode* l1 ,LNode* l2)
    {
        if(!l1) return l2;
        if(!l2) return l1;

        LNode* head=NULL;
        if(l1->data<l2->data)
        {
            head=l1;
            head->next=mergeTwoLists_recursion(l1->next,l2);
        }
        else
        {
            head=l2;
            head->next=mergeTwoLists_recursion(l1,l2->next);
        }
        return head;
    }
    static LNode* mergeTwoLists_iterative(LNode* l1,LNode* l2)
    {
        if(!l2) return l1;
        if(!l1) return l2;
        LNode*head =NULL;
        if(l1->data<l2->data)
        {
            head=l1;
            l1=l1->next;
        } else
        {
            head=l2;
            l2=l2->next;
        }
        LNode* tail=head;
        while(l1 && l2)
        {
            if(l1->data<l2->data)
            {
                tail=l1;
                l1=l1->next;
            }
            else
            {
                tail=l2;
                l2=l2->next;
            }
            tail=tail->next;
        }
        if(l2)
        {
            tail->next=l2;
        }
        if(l1)
        {
            tail->next=l1;
        }
        return head;
    }

    static LNode* merge_sort_on_LL(LNode* head)
    {
        if(!head || !head->next) return head;
        LNode*slow=head;
        LNode*fast=head->next;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        LNode* n= slow->next;
        slow->next=NULL;
        LNode *l1=merge_sort_on_LL(head);
        LNode *l2=merge_sort_on_LL(n);
        LNode* ans = mergeTwoLists_recursion(l1,l2);
        return ans;
    }

};
