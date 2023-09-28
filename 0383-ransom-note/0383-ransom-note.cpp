class Solution {
public:
    bool canConstruct(string r, string m) {
        unordered_map<char, int>umap;
        
        for(int i =0; i<m.length(); i++)
        {
            umap[m[i]]++;
        }
       for (int i = 0; i < r.length(); i++) {
            if (umap.find(r[i]) != umap.end() && umap[r[i]] > 0) {
                umap[r[i]]--;
            } else {
                return false;
            }
        }
        return true;
        
        
        
    }
};