class Solution {
public:
    string reverseWords(string s) {
        
        string ans = "";
        int a =0;
        
        for(int i=0; i<s.length(); i++) 
        {
            if(s[i]== ' ')
            {
                string temp = "";
                reverse(s.begin()+a, s.begin()+i);
                
                // ans += temp;
                // ans += reverse(s.begin()+a, s.begin()+i);
                // ans.append(reverse(s.begin()+a, s.begin()+i));
                a=i+1;
            }
        }
        
            reverse(s.begin()+a, s.end());
        
        return s;
    }
};