class Solution {
public:
    int minimumOperations(vector<int>& nums) {

        int i, n = nums.size();
        int num=0;
        int count=0;
        int j;

        sort(nums.begin(), nums.end());

        for(i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
                num = nums[i];

            count++;

            for(j=i;j<n;j++)
            {
                nums[j]-=num;
            }
            }
        }

        return count;
        
    }
};