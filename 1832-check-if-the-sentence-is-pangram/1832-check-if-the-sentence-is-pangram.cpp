class Solution {
public:
    bool checkIfPangram(string sentence) {
      
        int flag = 0;
        set<int> oset;
        for(int i = 0; i<sentence.length(); i++)
        {
         oset.insert(sentence[i]);
        }
        
        for(auto it: oset)
        {
         if(it>=97 && it<= 122)
         {
            flag++;
         }
        }

        if(flag!= 26)
        {
            return 0;
        }
       return 1; 
    }
};