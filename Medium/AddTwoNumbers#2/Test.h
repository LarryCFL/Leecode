#ifndef __TEST_H__
#define __TEST_H__

#include <stdio.h>
#include <stdlib.h>

struct ListNode {
	int val;
	struct ListNode *next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2);
#endif /* __TEST_H__ */