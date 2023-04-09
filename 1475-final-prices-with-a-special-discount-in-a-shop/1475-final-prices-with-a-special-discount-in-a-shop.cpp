class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack <int> s;
        vector <int> v =prices;

        // for(int i = 1; i<prices.size() -1; i++)
        // {
        //     s.push(prices[i]);
        // }
        for(int i = prices.size()-1; i>=0; i--)
        {
            while(!s.empty())
            {
                if(prices[i]>=s.top())
                {
                    v[i]= prices[i]-s.top();
                    break;
                }
                else
                s.pop();
            }
            s.push(prices[i]);
        }
        return v;
    }
};