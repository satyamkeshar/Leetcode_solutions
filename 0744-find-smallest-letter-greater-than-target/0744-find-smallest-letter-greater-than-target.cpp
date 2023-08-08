class Solution {
public:
    char nextGreatestLetter(vector<char>& l, char target) {
      
        char ans = l[0];
        
        for(int i =0; i<l.size(); i++)
        {
           if(l[i]>target) 
               return l[i];
        }
        
        return ans;
    }
};