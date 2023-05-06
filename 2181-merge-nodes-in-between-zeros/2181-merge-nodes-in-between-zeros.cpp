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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *res = new ListNode();
        ListNode *res1 =res;
        head = head->next;
        int temp =0;
        while(head!=NULL)
        {
            temp+= head->val;
            if(head->val ==0)
            {
                ListNode *temp1 = new ListNode(temp);
                res1->next = temp1;
                res1= res1->next;
                temp =0;
            }
            head= head->next;
        }
        res = res->next;
        return res;
    }
};