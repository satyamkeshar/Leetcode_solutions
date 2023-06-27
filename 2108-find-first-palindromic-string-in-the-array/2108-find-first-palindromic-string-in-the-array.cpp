class Solution {
public:
    string firstPalindrome(vector<string>& words) {
       string str;
        vector<string>v;
        for(int i =0; i<words.size(); i++)
        {
            string temp = words[i];
            reverse(temp.begin(), temp.end());
            v.push_back(temp);
        }
        for(int i =0; i<words.size(); i++)
        {
            if(words[i]==v[i])
            {
                str = words[i];
                break;
            }
        }
        return str;
    }
};