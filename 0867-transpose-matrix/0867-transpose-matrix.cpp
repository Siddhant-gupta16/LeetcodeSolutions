class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
         
        int a = matrix.size();
         int b = matrix[0].size();
        
        vector<vector<int>>arr(b,vector<int>(a));
        
        for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j <b ; j++) {
                 arr[j][i]=matrix[i][j] ;
        }
            
            
            }
      return arr;
    }
    
};