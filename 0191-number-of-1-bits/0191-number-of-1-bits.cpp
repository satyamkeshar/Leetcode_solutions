class Solution {
public:
    int hammingWeight(uint32_t n) {
       string s = "";        
        int count =0;
    while(n>0)
    {
        s= to_string(n%2) + s;
        n/=2;
    }
           
        for(int i =0; i<s.size(); i++)
        {
            if(s[i]&1)
                count++;
        }
       return count; 
    }
};