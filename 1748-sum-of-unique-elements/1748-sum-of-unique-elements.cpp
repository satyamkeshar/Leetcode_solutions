class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> umap;
        int sum=0;
        for(int i =0; i<nums.size(); i++)
        {
            umap[nums[i]]++;
        }
        
        for(auto x: umap)
        {
            if(x.second ==1)
            {
                sum+= x.first;
            }
        }
        return sum;
        
    }
    
};