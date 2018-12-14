#include <stdio.h>
#include <stdlib.h>
struct ListNode {
    int val;
    struct ListNode *next;
};

/**
 * Date: 2018-12-14 Fri 09:16 AM
 * Reverse a singly linked list.
 * Example:
 * Input: 1->2->3->4->5->NULL
 *        NULL<-1<-2<-3<-4<-5
 * Output: 5->4->3->2->1->NULL
 * Follow up:
 * A linked list can be reversed either iteratively or recursively. 
 * just change the next pointer to the previous
 *
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* pre = NULL;
    struct ListNode* cur = head;
    while(cur != NULL) {
        struct ListNode* tmpNode = cur->next;
        cur->next = pre;
        pre = cur;
        cur = tmpNode;
    }
    return pre;
}

int main(int argc, const char** argv)
{
    struct ListNode* L = malloc(sizeof(struct ListNode));
    if (L == NULL) {
        exit(0);
    }
    L->next = NULL;
    struct ListNode* p = L; 
    //init list, insert item to the end
    for(int i = 0; i < 5;i++) {
        struct ListNode* item = malloc(sizeof(struct ListNode));
        if (item == NULL) {
            exit(0);
        }
        item->val = i;
        item->next = NULL;
        p->next = item;
        p = p->next;
    }
    L = reverseList(L);
    p = L;
    while(p) {
        printf("%d ", p->val);
        p = p->next;
    }
    return 0;
}

