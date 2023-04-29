class Solution {
public:
    vector<int> minOperations(string boxes) {
        int temp;
        int size = boxes.length();
        vector<int> a;
        
        for(int i =0; i<size; i++)
        {
            temp = 0;
            for(int j = 0; j<size; j++)
            {
                if(boxes[j]=='1')
                {
                    temp+= abs(i-j);
                }
            }
            a.push_back(temp);
        }
        
        return a;
        
    }
};