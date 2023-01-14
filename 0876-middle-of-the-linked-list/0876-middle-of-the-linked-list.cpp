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
    ListNode* middleNode(ListNode* head) {
        ListNode *temp = head;
       int count =0;
        for(int i =1;temp!=NULL; i++)
        {
            temp = temp->next;
            count++;
        }
        if(count %2!=0)
            count = count/2;
        else
            count = count/2;
        
        for(int i =1; i<=count; i++)
        {
           head = head->next; 
        }
        
        return head;
        
    }
};