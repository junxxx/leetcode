#include <stdio.h>
struct ListNode {
 int val;
 struct ListNode *next;
};

/**
 * Date: 2018-12-15 Sat 07:29 PM
 * Version: 1.0
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if (head == NULL )
        return head;
    struct ListNode* pre = head;
    struct ListNode* cur = head->next;
    while(cur) {
        while(cur &&  cur->val == pre->val) {
            cur = cur->next;
        }
        pre->next = cur;
        if (cur) 
            cur = cur->next; 
        pre = pre->next;
    }
    return head;
}

int main(int argc, const char** argv)
{
    return 0;
}

