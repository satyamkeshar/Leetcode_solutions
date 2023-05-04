class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
     priority_queue<int> pq;
        
        long long res = 0;
        for(int i = 0; i<gifts.size(); i++)
            pq.push(gifts[i]);
         for(int i =0; i<k; i++)
         {
             int a= sqrt(pq.top());
             pq.pop();
             pq.push(a);
         }
        while(!pq.empty())
        {
            res+= pq.top();
            pq.pop();
        }
        
        return res;
    }
};