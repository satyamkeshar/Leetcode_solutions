class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& m) {
        
        vector<int>r, c, lucky;
        
        for(int i =0; i<m.size(); i++)
        {
            int k = INT_MAX;
            for(int j =0; j<m[0].size(); j++)
            {
                k = min(k, m[i][j]);
            }
                r.push_back(k);
        }
        
        for(int i =0; i<m[0].size(); i++)
        {
            int k = INT_MIN;
            for(int j =0; j<m.size(); j++)
            {
                k = max(k, m[j][i]);
            }
                c.push_back(k);
        }
        
        for(int i =0; i<r.size(); i++)
        {
            for(int j =0; j<c.size(); j++)
            {
                if(r[i]==c[j])
                    lucky.push_back(r[i]);
            }
        }
        return lucky;
    }
};