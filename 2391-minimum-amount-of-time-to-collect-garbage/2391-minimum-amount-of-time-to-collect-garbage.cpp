class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        
        int val =0; int p= -1, g =-1, m =-1;
        
        for(int i =1; i<travel.size(); i++)
        {
            travel[i] += travel[i-1];
        }
        
        for(int i =0; i<garbage.size(); i++)
        {
            for(int j =0; j<garbage[i].size(); j++)
            {
                if(garbage[i][j] == 'P')
                {
                     val++;
                    p = i;
                }   
                
                if(garbage[i][j] == 'G')
                { 
                    val++;
                    g = i;
                }
                if(garbage[i][j] == 'M')
                {
                    val++;
                    m =i;
                }
            }
        }
        if(p!= -1 && p != 0)
            
            val+= travel[p-1];
        if(g!= -1 && g  != 0)
            val+= travel[g-1];
        if(m!= -1 && m  != 0)
            val+=travel[m-1];

        return val;
    }
};