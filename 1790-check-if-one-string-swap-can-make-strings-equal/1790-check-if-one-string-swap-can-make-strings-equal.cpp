class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        
        int diff =0;
        vector<char> v;
        
        
        if(s1 ==s2)
            return true;
        
        for(int i =0; i<s1.length(); i++)
        {
            if(s1[i]!= s2[i])
            {
                diff++;
                v.push_back(i);
            }
        }
        if(diff!=2)
            return 0;
        
        swap(s1[v[0]], s1[v[1]]);
        if(s1 == s2)
                          return 1;
               return 0;           
    }
                         
};