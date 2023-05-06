class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
      unordered_map<int, int> umap;
        
        for(int i =0; i<nums.size(); i++)
        {
            umap[nums[i]]++;
        }
        
        int repeat= INT_MIN;
        for(auto it: umap)
        {
            repeat = max(repeat, it.second);
        }
        vector<vector<int>> v(repeat);

        for(int i =0; i<repeat; i++)
        {
            for(auto &it: umap)    
            {
                if(it.second>0)
                {
                    v[i].push_back(it.first);
                    it.second--;
                }
            }
        }        
        return v;
        
    }
};