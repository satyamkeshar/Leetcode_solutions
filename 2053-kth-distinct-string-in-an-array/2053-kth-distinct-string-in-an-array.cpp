class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int>umap;
        vector<string>ans;
        vector<string>::iterator it;
        string s;
        int a;
        for(int i =0; i<arr.size(); i++)
        {
           umap[arr[i]]++;
        }
        
        for(auto i: umap)
        {
            if(i.second==1)
            {    ans.push_back(i.first);
            // cout<<i.first<< " "; 
            }
        }
        for(int i =0; i<arr.size(); i++ )
        {
            it = find(ans.begin(), ans.end(), arr[i]);
            // cout<< i<< "  ";
            if(it!= ans.end())
            {
              a =i;
                cout<< a<< " ";
               --k;
                if(k==0)
                    break;
            }  
        }
        if(k!=0)
            return s;
        s = arr[a];
        return s;
        
        
        
    }
};