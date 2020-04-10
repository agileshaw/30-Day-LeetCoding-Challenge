/**
 * Day 8 - Middle of the Linked List
 * 
 * https://github.com/agileshaw/30-Day-LeetCoding-Challenge
 **/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* middleNode(struct ListNode* head){
    int count = 0, tmp = 0;
    struct ListNode* cur = head;
    struct ListNode* node = head;
    
    while ((cur = cur->next) != NULL)
        count++;
    
    if (count % 2 == 0)
        tmp = count/2;
    else
        tmp = count/2 + 1;
    
    while (tmp > 0) {
        node = node->next;
        tmp--;
    }
    
    return node;
}
