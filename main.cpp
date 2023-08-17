
#include "Leetcodefunc.h"
#define co std::cout
#define nl "\n"
int main()
{

    //--------------------------------Vector----------------------------//
    /*
    Vector v;
    v.push(10);
    v.push(20);
    v.push(30);
    v.push(40);
    v.push(50);
    v.display();
    v.push(60);
    v.display();
    Vector *v3;
    *v3=v;
    v3->display();
     */
    //--------------------------------LinkList----------------------------//
    /*
    LNode l1(10);
    LNode l2(20);
    l1.next=&l2;
    LNode *head=&l1;
    LNode *l3=new LNode(100);
    l2.next=l3;
    LNode::print(head);
    LNode::print(head);
    LNode::print_add(head);
    LNode::print_add(head);

    LNode* head1=LLfunc::take_Input_h();
    LNode::print(head1);
    LNode* head2=LLfunc::take_Input_t();
    LNode::print(head2);
    co<<LLfunc::length(head2)<<nl;

//    LNode*head=LLfunc::take_Input_h();
//    LNode::print(head);
//    LLfunc::insert_at_i(head,200,30);
//    LNode::print(head);
//    LNode* head1=LLfunc::delete_i_node_memory_leak(head,5);
//    LNode::print(head1);



    co<<"------------------------"<<nl;
    LNode*head2=LLfunc::take_Input_h();
    LNode::print(head2);
    co<<LLfunc::recursive_length(head2)<<nl;
    if(LLfunc::is_present(head2,27)) co<<"YES"<<nl;
    else co<<"NO"<<nl;
    co<<LLfunc::index_of_elem(head2,10)<<nl;
    */
    //--------------------------------Leetcode functions----------------------------//

    LNode* head=LLfunc::take_Input_h();
    LNode::print(head);
    LNode* r=Linked_List_Leetcode::reverse_List(head);
    LNode::print(r);



    return 0;
}