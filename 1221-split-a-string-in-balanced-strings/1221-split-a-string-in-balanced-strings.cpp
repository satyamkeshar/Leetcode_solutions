class Solution {
public:
    int balancedStringSplit(string s) {
        int r=0, l=0, count =0;
        
        for(int i =0; i<s.length(); i++)
        {
            if(s[i]=='R')
                r++;
            if(s[i]=='L')
                l++;
            if(l==r)
            {
                count++;
                l=r =0;
            }
        }
        
        return count;
        
    }
};