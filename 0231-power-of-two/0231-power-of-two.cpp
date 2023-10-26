class Solution {
public:
    bool isPowerOfTwo(int n) {
       if(n==1)
           return true;
        long long temp =1;
        while(n>=(2*temp))
        {
            temp*=2;
        }
        cout<< temp;
        if(temp==n)
            return true;
        
        return 0;
    }
};