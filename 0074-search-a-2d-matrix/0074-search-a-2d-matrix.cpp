class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int s =0;
        int e = (matrix.size()*matrix[0].size()-1);
        
        int mid = s +(e-s)/2;
        
        while(s<=e){
            
          int row = mid/matrix[0].size();
          int col = mid%matrix[0].size();
            
          if(matrix[row][col]==target){
              return true;
          }  
            
            
          else if(matrix[row][col]<target){
                
               s= mid+1;
         }  
             else{
                 e =mid-1;
             }
            
            
            mid = s +(e-s)/2;
            
            
            
        }
        
        return false;
        
        
        
        
        
        
        
        
        
    }
};