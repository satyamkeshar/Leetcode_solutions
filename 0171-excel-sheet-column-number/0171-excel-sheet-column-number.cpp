class Solution {
public:
    int titleToNumber(string c) {
        
        vector<char>v(26);
        v[0] = 'A';
        int a = 0;
        
        for(int i =1; i<26; i++)
        {
            v[i]= v[0]+i;
        }
        
        for(int i =0; i <c.size();i++)
        {
            if(i>0)
            {
                a = a*26;
            }
            for(int j =0; j<v.size(); j++)
            {
                if(c[i]==v[j])
                {
                    a+=j+1;
                    break;
                }
            }
        }
    
        return a;

    }
};