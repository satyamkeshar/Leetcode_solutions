class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>v, ind;
        for(int i =0; i<s.size();i++)
        {
            if(s[i]==c)
                ind.push_back(i);
        }
        
        for(int i =0; i<s.size(); i++)
        {
            int temp= INT_MAX;
            for(int j =0; j<ind.size(); j++)
            {
                int temp1 = abs(i-ind[j]);
                temp = min(temp, temp1);
            }
            v.push_back(temp);
        }
            
        
        return v;
    }
};