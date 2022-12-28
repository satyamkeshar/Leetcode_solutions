class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> umap;
        int sum =0;
        for(int i =0; i<stones.length(); i++)
        {
            umap[stones[i]]++;
        }
        for(int i =0; i<jewels.length(); i++)
        {
            int x = jewels[i];
            if(umap.find(x)!=umap.end())
            {
                auto temp=umap.find(x);
                sum +=temp->second;
            }
        }
        return sum;
        
    }
};