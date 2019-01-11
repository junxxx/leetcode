#include <stdio.h>
struct ListNode {
    int val;
    struct ListNode* next;
}

/**
 * Given a linked list, determine if it has a cycle in it.
 *
 * To represent a cycle in the given linked list,
 * we use an integer pos which represents the position (0-indexed) 
 * in the linked list where tail connects to. 
 * If pos is -1, then there is no cycle in the linked list.
 * Date: 2018-12-25 Tue 11:43 AM
 * Version: 1.0
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode* p1 = head;
    struct ListNode* p2 = head;
    while(p1) {
        if(p2 == NULL || p2->next == NULL)
            return false;
        p1 = p1->next;
        p2 = p2->next->next;
        if (p1 == p2)
            return true;
    }
    return false;
}

int main(int argc, const char** argv)
{
    return 0;
}

