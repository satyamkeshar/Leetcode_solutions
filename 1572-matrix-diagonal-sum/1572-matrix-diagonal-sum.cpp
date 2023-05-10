class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
      
    int sum = 0;    
        int n = mat.size();
        cout<< n;
        
    for(int i = 0; i<mat.size();i++)
      {
          for(int j =0; j<mat.size();j++)
          {
              if(i==j || abs(i+j)==mat.size()-1)
              {
                  sum+=mat[i][j];
              }
          }
      }
        return sum;
    }
};