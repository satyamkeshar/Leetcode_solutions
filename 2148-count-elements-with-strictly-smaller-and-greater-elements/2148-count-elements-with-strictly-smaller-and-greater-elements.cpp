class Solution {
public:
    int countElements(vector<int>& nums) {
       sort(nums.begin(), nums.end());
        int mx= nums[nums.size()-1];
        int mi = nums[0];
        int count =0;
        for(int i = 0; i<nums.size(); i++)
        {
            if(nums[i]>mi && nums[i]<mx)
                count++;
        }
        
        return count;
        
    }
};