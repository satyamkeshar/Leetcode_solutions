class Solution {
public:
    int partitionString(string s) {
          unordered_set<char>umap;
        int c=1;
        umap.insert(s[0]);
        for(int i=1;i<s.size();i++){
            
            if(umap.find(s[i])!=umap.end()){
                c++;
                umap.clear();
            }
            umap.insert(s[i]);
        }
        return c;
    }
};