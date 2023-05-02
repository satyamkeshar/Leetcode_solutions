class Solution {
public:
    int minSetSize(vector<int>& arr) {
        priority_queue<pair<int, int>> pq;
        
        map<int,int> map;    
        for(int i = 0; i<arr.size(); i++)
        {
            map[arr[i]]++;
        }
        
        for(auto i: map)
        {
            pq.push({i.second, i.first});
        }
        
        int count =1;
        int sum = pq.top().first;

        while(sum<arr.size()/2)
        {
            pq.pop();
            sum += pq.top().first;
            cout<< sum;
            count++;
        }
        return count;
    }
};