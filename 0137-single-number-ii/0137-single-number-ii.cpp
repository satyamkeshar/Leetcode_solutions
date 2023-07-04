class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        for(int i=0; i<nums.size(); i+=3)
        {
            if(i+2>=nums.size())
                return nums[i];
            if(nums[i]!=nums[i+1] || nums[i]!= nums[i+2])
            {  
                return nums[i];
                break;
            }
        }
        
        return 1;
    }
};