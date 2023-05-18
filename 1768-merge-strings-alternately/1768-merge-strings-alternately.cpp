class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int index1 = 0;
        int index2 = 0;
        int n1 = word1.size();
        int n2 = word2.size();
        string res = "";

        while(index1 < n1 || index2 < n2) {

            if(index1 < n1) res+= word1[index1++];
            if(index2 < n2) res += word2[index2++];
        }
        
        return res;
    }
};