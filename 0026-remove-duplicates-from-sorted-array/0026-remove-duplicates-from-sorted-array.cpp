// class Solution {
// public:
// //     int removeDuplicates(vector<int>& nums) {
//         set<int> s; 
//         for(int i =0; i<nums.size(); i++)
//         {
//             s.insert(nums[i]);
//         }
        
//         int ans = s.size();
//         nums.clear();
//         for(auto i:s)
//         {
//            //int k = *i;
//            nums.push_back(i);
//         }
//         return ans;
    class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
        int newindex=0;
        int length=nums.size();
        if(nums.size()==1|| nums.size()==0)
        {
            return nums.size();
        }
        int iterating_index=0;
        for(int iterating_index=1; iterating_index<nums.size(); iterating_index++)
        {
            if(nums[newindex]!=nums[iterating_index])
            {
                newindex++;
                nums[newindex]=nums[iterating_index];
            }
            else
            {
                continue;
            }
        }
        return newindex+1;
    }
};