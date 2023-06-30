class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int, int> umap;
        
        for (int i = 0; i < arr.size(); i++) {
            umap[arr[i]]++; 
        }
        
        for (auto i : arr) {
            if (i != 0 && umap.find(i * 2) != umap.end()) {
                return true;
            } else if (i == 0 && umap[0] >= 2) {
                return true;
            } 
        }
        
        return false; 
    }
};