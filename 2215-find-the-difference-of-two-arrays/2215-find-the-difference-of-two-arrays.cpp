class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
        
        vector<int> v1, v2;
        
        unordered_set<int>n1;
        unordered_set<int>n2;
        for(int i =0; i<nums1.size(); i++)
        {
            n1.insert(nums1[i]);
        }
        for(int i =0; i<nums2.size(); i++)
        {
            n2.insert(nums2[i]);
        }
        
        for(int it: n1)
        {
            if(n2.count(it)==0)
            {
                v1.push_back(it);
            }
        }
            
        for(int it: n2)
        {
            if(n1.count(it)==0)
            {
                v2.push_back(it);
            }
        }
              
        return {v1, v2};
    }
};