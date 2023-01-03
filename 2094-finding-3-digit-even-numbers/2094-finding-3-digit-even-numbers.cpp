class Solution {
public:
    
        
    vector<int> findEvenNumbers(vector<int>& digits) {
        //unordered_set<int> umap;
        unordered_map<int,int> m;
        vector<int> ans;
        for(int i=0;i<digits.size();i++)
        {
            m[digits[i]]++;
        }
        for(int i=100;i<1000;i++)
        {
            string s=to_string(i);
            if((s[2]-'0')%2 != 0)
                continue;
         
            if(s[0]==s[1] && s[1]==s[2]) //all 3 same
            {
                if(m[s[0]-'0']>=3)
                    ans.push_back(stoi(s));
            }
            else if(s[0]==s[1] || s[0]==s[2] || s[1]==s[2]) // any 2 same
            {
                if(s[0]==s[1])
                {
                    if(m[s[0]-'0']>=2 && m[s[2]-'0']>=1)
                        ans.push_back(stoi(s));
                }
                else if(s[1]==s[2] )
                {
                    if(m[s[1]-'0']>=2 && m[s[0]-'0']>=1)
                        ans.push_back(stoi(s));
                }
                 else if(s[0]==s[2] )
                {
                    if(m[s[0]-'0']>=2 && m[s[1]-'0']>=1)
                        ans.push_back(stoi(s));
                }
                
            }
            else
            {
                
                if(m[s[0]-'0']>=1 && m[s[1]-'0']>=1 && m[s[2]-'0']>=1)
                {
                 //   cout<<"d";
                    ans.push_back(stoi(s));
                }
                    
            }
        }

       
        return ans;
    }
};