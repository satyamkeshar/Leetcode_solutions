class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        
        int n = score.size();
        vector<vector<int>>v;
        priority_queue<pair<int, int>> p;
        
                
        for(int i = 0; i<n; i++)
        {
            p.push({score[i][k], i});
        }
        
        
        while(!p.empty())
        {
           auto x = p.top();
            p.pop();
            v.push_back(score[x.second]);
        }
        
        
        
        return v;
        
        
        
    }
};