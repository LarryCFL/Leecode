#include "Test.h"

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* head = NULL;
    struct ListNode* new_node = NULL;
    struct ListNode* last_node = NULL;
    int carry = 0, sum=0;
    while(l1!=NULL || l2!=NULL)
    {
        new_node = (struct ListNode*)malloc(sizeof(struct ListNode));
        sum = ((l1!=NULL)?l1->val:0) + ((l2!=NULL)?l2->val:0) + carry;
        carry = sum/10;
        new_node->val = sum%10;
        new_node->next = NULL;
        if(head==NULL)
        {
            head=new_node;
            last_node = head;
        }
        else
        {
            last_node->next=new_node;
            last_node = last_node->next;
        }

        if (l1!=NULL)
        {
            l1=l1->next;
        }

        if (l2!=NULL)
        {
            l2=l2->next;
        }

    }

    if(carry)
    {
        new_node = (struct ListNode*)malloc(sizeof(struct ListNode));
        new_node->val = carry;
        new_node->next = NULL;

        last_node->next=new_node;
    }

    return head;
}