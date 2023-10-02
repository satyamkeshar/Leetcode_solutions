class Solution {
public:
    int getLucky(string s, int k) {
        int ans =0;
        for(auto i:s)
        {
            int a = i-96;
            
            if(a<10)
            {
                ans+=a;
            }
            else if(i>=10)
            {
                ans += a%10;
                a =a/10;
                ans+=a;
            }
        }
        cout<< ans;
        while(--k)
        {
         int t =0;
            while(ans>0)
            {
                int temp = ans%10;
                t+=temp;
                ans = ans/10;
            }
            ans= t;
        }
        return ans;
    }
};