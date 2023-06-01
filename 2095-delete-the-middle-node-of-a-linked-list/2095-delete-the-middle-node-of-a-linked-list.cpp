/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *temp = head;
        int count = 0;
        while(temp!=NULL)
        {
            count++;
            temp =temp->next;
        }
        temp = head;
        count = count/2;
        if(temp ->next == NULL)
        return NULL;
        while(--count)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        return head;
    }
};