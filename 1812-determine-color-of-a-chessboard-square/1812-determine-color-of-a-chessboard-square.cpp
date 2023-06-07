class Solution {
public:
    bool squareIsWhite(string s) {
                if((s[0]+s[1])%2==0)
            return false;
        else
            return true;

    }
};