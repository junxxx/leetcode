#include <stdio.h>
struct ListNode {
    int val;
    struct ListNode *next;
}

/**
 * Date: 2018-12-13 Thu 05:25 PM
 * Given a non-empty, singly linked list with head node head,
 * return a middle node of linked list.
 * If there are two middle nodes, return the second middle node.
 */
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode* p = head;
    int count = 0;
    while(p) {
        p = p->next;
        count++;
    }
    if (count <= 1) 
        return head;
    count = count / 2;
    p = head;
    while (count--) {
        p = p->next;
    }
    head->next = p;
    return head->next;
}
int main(int argc, const char** argv)
{
    return 0;
}

