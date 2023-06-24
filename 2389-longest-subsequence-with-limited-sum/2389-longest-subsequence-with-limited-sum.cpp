class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
          vector<int> ans;
        sort(nums.begin(),nums.end());
        for(int i=1; i<nums.size(); i++){
            nums[i] += nums[i-1];
        }

        for(auto it : queries){
            int index = upper_bound(nums.begin(), nums.end(), it) - nums.begin();
            ans.push_back(index);
        }
        return ans;
    }
};