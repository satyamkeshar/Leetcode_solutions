class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>v;
        int sum =0;
        int maxxx = INT_MIN;
        v.push_back(0);
        for(int i =0; i<gain.size(); i++)
        {
            sum+= gain[i];
            v.push_back(sum);
        }
        
         for(int i =0; i<v.size(); i++)
         {
             if(v[i]>maxxx)
                maxxx = v[i];
         }
        
        return maxxx;
        
        
        
    }
};