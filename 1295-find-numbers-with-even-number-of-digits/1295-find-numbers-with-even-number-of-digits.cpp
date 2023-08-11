class Solution {
public:
    int findNumbers(vector<int>& nums) {
        vector<string>v;
        int count =0;
        
        for(int i =0; i<nums.size(); i++)
        {
            v.push_back(to_string(nums[i]));
        }
        
        for(int i =0; i<v.size(); i++)
        {
            if(v[i].length()%2 == 0)
                count++;
        }
        
        return count;
        
    }
};