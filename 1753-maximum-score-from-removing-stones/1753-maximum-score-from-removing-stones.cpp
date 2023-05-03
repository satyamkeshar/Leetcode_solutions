class Solution {
public:
    int maximumScore(int a, int b, int c) {
        int score =0;
        priority_queue<int>pq;
        
        pq.push(a); pq.push(b); pq.push(c);
        
        int num1=pq.top();
            pq.pop();
        int num2 = pq.top();
            pq.pop();
        
        while(num1!=0 && num2!=0)
        {
            score++;
            num1--;
            num2--;
            pq.push(num1); pq.push(num2);
            
            num1 = pq.top();
            pq.pop();
            
            num2 = pq.top();
            pq.pop();
            
        }
        return score;
    }
};