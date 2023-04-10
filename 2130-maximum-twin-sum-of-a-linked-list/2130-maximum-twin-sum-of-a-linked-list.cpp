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
    int pairSum(ListNode* head) {
        stack<int> s;
        int max_val = INT_MIN;
        long count =0;
        ListNode* temp = head;

        while(temp!= NULL)
        
        {
            count++;
            temp = temp->next; 
        }

        count = count/2;
        temp = head;

        for(long i =0; i<count;i++)
        temp = temp->next;

        while(temp!=NULL)
        {
            s.push(temp->val);
            temp = temp->next;
        }
        while(!s.empty())
        {
            int sum =(head->val)+ s.top();
            max_val = max(max_val, sum);
            s.pop();
            head= head->next;
        }

        return max_val;
    }
};