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
    int getDecimalValue(ListNode* head) {
      string num = "";
        int num1 =0;
        while(head!=NULL)
        {
            num +=to_string(head->val);
                head = head->next;
        }
        int base = 0;
        for(int i = num.length()-1;i>=0; i-- )
        {
            if(num[i] =='1')
                num1 += pow(2,base );
            base++;
        }
        return num1;
//         cout<<num;
//         num1 =  stoll(num, 0, num.length()-1);
//         return num1;
    }
};