class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int max = 0;
        
        max = (nums.at(nums.size()-1) * nums.at(nums.size()-2)) - (nums.at(0)* nums.at(1));
        
        return max;
    }
};