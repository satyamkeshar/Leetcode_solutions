class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int pair =0;
        int left =0;
       unordered_map<int, int> umap;
        vector<int> nums1;
    for(auto i : nums)
    {
        umap[i]++;
        
    }
        
        for( auto it: umap)
        {
            if(it.second ==2)
            {
                pair++;
            }
            else if(it.second>2)
            {
                pair += it.second/2;
                if(it.second%2==1)
                left++;
            }
            else
                left++;
            // nums.erase(it);
        }
        
        nums1.push_back(pair);
        nums1.push_back(left);
        return nums1;
    }
};