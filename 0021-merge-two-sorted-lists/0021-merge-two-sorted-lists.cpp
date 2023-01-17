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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       
        vector<int> v;
        ListNode *temp1 = list1;
        ListNode *temp2= list2;
        
        if(temp1==NULL && temp2==NULL)
            return list1;
        for(int i=0; temp1 !=NULL; i++)
        {
            v.push_back(temp1->val);
            temp1 = temp1->next;
        }
        
        for(int i= 0; temp2!= NULL;i++)
        {
            v.push_back(temp2->val);
            temp2 = temp2->next;
        }
    
        
        sort(v.begin(), v.end());
            
        for(int i=0; i<v.size(); i++)
            cout<<v[i]<< " ";
        
        ListNode *h1 = new ListNode(v[0]);
        ListNode *temp3 = h1;
        
        for(int i = 1;i<v.size(); i++)
        {
            ListNode *temp = new ListNode(v[i]);
            temp3->next = temp;
            temp3 = temp3->next;
        }
        return h1;
    }
};