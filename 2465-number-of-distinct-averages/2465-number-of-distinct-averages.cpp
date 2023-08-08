class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        unordered_set<float>umap;
        int n = nums.size();
        
        for(int i =0; i<n; i++)
        {
           int avg = (nums[i]+ nums[n-1]);
            n--;
            umap.insert(avg);
        }    
        
        return umap.size();
    }
};