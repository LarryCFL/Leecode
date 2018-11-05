#include <stdint.h>
#include "test.h"

void append(struct ListNode **head_ref, int new_data)
{
    struct ListNode *new_node = (struct ListNode *)malloc(sizeof(struct ListNode));
    new_node->val = new_data;
    new_node->next = NULL;

    struct ListNode *last_node = *head_ref;

    if (*head_ref == NULL)
    {
        *head_ref = new_node;
    }
    else
    {
        while(last_node->next!=NULL)
        {
            last_node = last_node->next;
        }

        last_node->next = new_node;
    }

}

void printList(struct ListNode *node)
{
  while (node != NULL)
  {
     printf(" %d ", node->val);
     node = node->next;
  }
  printf("\n");
}


int main()
{
    struct ListNode *head = NULL, *head2=NULL;
    struct ListNode *sum = NULL;

    append(&head, 1); // append
    //append(&head, 8); //append
    //append(&head, 3); //append

    append(&head2, 9); //append
    append(&head2, 9); //append
    //append(&head2, 4); //append

    printList(head);
    printList(head2);

    sum = addTwoNumbers(head, head2);

    printList(sum);
    return 0;
}
