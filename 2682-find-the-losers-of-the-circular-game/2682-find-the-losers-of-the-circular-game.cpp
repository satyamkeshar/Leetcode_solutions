class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {
        vector<int> c(n, 0);
        vector<int> ans;
        int i =1;
        int s = 0;
        c[s] = 1;
        while(c[s]!=2)
        {
            s = (s+ (i*k))%n;
            c[s]++;
            i++;
        }
        
        
        for(int i =0; i<n; i++)
        {
            if(c[i]==0)
               ans.push_back(i+1);
        }
    
        return ans;
    }
};