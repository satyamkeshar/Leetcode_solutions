class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int w_count=0; int min_w =INT_MAX; int start = 0;
        
        for(int i = 0; i<blocks.length(); i++)
        {
            if(blocks[i]=='W')
                w_count++;
            
            if(i-start+1==k)
            {
                min_w = min(w_count, min_w);

                if(blocks[start] =='W')
                {  
                    w_count--; 
                }
                                    start++; 
            }
        }
        return min_w;
    }
};