class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int> umap;
        vector<int> res;
        for(int i  =0; i<s.length(); i++)
        {
            char ch = s[i];
            umap[ch] = i;
        }
        
        int prev =-1;
        int max_occ = 0;
        
        
        for(int i = 0; i<s.size(); i++)
        {
            max_occ = max(max_occ, umap[s[i]]);
            
            if(max_occ == i)
            {
                res.push_back(max_occ- prev);
                 prev = max_occ;
            }
        }
        return res;
    }
};