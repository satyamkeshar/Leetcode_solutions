class Solution {
public:
    string replaceDigits(string s) {
        string ans = "";
        ans.push_back(s[0]);
        for(int i=1; i<s.length();i++)
        {
            if(i%2 ==0)
                ans = ans+ s[i];
            else if(i%2 ==1)
            {
                char a  = s[i-1] +(s[i] - '0'); 
                
                ans = ans + a;
            }
        }
        return ans;
    }
};