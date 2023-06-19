class Solution {
public:
    string reversePrefix(string word, char ch) {
        int ind = word.size()-1;
        for(int i =0; i<word.size(); i++)
        {
            if(word[i]==ch)
            {
                cout<< i;
                reverse(word.begin(), word.begin()+i+1);
                break;
            }
        } 
        return word;
    }
};