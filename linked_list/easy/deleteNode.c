#include <stdio.h>
struct ListNode {
    int val;
    struct ListNode *next;
}


/**
 * Note:
 *
 * The linked list will have at least two elements.
 * All of the nodes' values will be unique.
 * The given node will not be the tail and it will always be a valid node of the linked list.
 * Do not return anything from your function.
 * Date: 2018-12-25 Tue 11:23 AM
 * Version: 1.0
 */
void deleteNode(struct ListNode* node) {
    node->val = node->next->next;
    node->next = node->next->next;
}

int main(int argc, const char** argv)
{
    return 0;
}

