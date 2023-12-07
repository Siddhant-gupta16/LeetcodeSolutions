class Solution {
public:
    bool isPerfectSquare(int num) {
         int s=0;
        int e =num;
        int mid = s +(e-s)/2;
        int  ans =0;
        while(s<=e){
            
            if((long)mid*mid==num){
                 
                return true;  }
            
          if((long)mid*mid<num){
              s=mid+1;
          }
            
            else{
                e=mid-1;
            }
            
            
            mid = s +(e-s)/2;
            
              }
    
        
        return false;
    }
    
};