class Solution {
public:
    int minimizedStringLength(string s) {
        unordered_set<char>umap;
        for(auto it: s)
        {
            umap.insert(it);
        }
        
        return umap.size();
    }
};