class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int>map;
        unordered_set<int>set;

        for(int i =0; i<arr.size(); i++)
        {
            map[arr[i]]++;
        }
        int count =0;
        for(auto it: map)
        {
            count++;
          set.insert(it.second);
        }
        if(set.size()!= count)
        return 0;


        return true;
    }
};