#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

/**
 * Remove all elements from a linked list of integers that have value val.
 *
 * Date: 2018-12-16 Sun 10:55 AM
 * Version: 1.0
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    while (head && head->val == val) {
        head = head->next;
    }
    struct ListNode* p = head;
    while(p) {
        if (p != NULL && p->next != NULL && p->next->val == val) 
            p->next = p->next->next;
        else
            p = p->next;
    }
    return head;
}

int main(int argc, const char** argv)
{
    return 0;
}

