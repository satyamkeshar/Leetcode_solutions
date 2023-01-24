class Solution {
public:
    int maxDepth(string s) {
          int balanced = 0, answer = 0;
        for(auto c : s) {
            if(c == '(')  {
                balanced++;
                answer = max(answer, balanced);
            }else if(c == ')') {
                balanced--;
            }
        }
        return answer;
    }
};