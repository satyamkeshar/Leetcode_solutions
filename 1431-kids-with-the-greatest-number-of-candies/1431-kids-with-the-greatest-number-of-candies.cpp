class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>v;
        int g = INT_MIN;
        for(int i =0; i<candies.size(); i++){
            if(candies[i]>g)
                 g = candies[i];   
        }
        
        for(int i =0; i<candies.size(); i++)
        {
            if(candies[i]+extraCandies>= g)
            {
                v.push_back(1);
            }
            else
                v.push_back(0);
        }
        
        return v;
    }
};