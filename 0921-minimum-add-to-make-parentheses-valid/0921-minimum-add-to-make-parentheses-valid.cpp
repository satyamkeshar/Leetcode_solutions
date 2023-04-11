class Solution {
public:
    int minAddToMakeValid(string s) {
     stack <char> st;
        for(int i =0; i<s.length(); i++)
        {
            if(st.empty())
                st.push(s[i]);
            // else if(s[i] == '(' && st.top() ==')')
            //     st.pop();
            else if(s[i] == ')' && st.top() =='(')
                st.pop();
            else if(s[i]=='(' || s[i]==')')
                st.push(s[i]);
        }
        
        
        int count =0;
        while(!st.empty())
        {
            count++;
            st.pop();
        }
        return count;
    }
};