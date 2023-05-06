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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *node_b = list1;
        ListNode *temp = list1;
        
        for(int i =0; i<=b; i++)
        {
            node_b = node_b->next;
        }
        
        for(int i = 1; i<a; i++)
        {
            temp = temp->next;
        }
        
        temp->next = list2;
        
        while(temp->next!= NULL)
        {
            temp = temp->next;
        }
        temp->next = node_b;
        
        
        
        
        return list1;
    }
};