class Solution {
public:
    int numberOfSteps(int num) {
        long count = 0;
       if(num ==0)
       {
           return 0;
       }   
        
        while(num >0)
       {           
        if(num % 2 == 1)
        {
            num = num-1;
            count++;
        }
        else 
        {
            num = num/2;
            count++;
        } 
           
       }
        return count;
        
    }
};