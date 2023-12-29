class Solution {

   bool check(string s,int a,int b){
        
        while(a<=b){
            if(s[a]!=s[b]){
                return false;
            }
            a++;
            b--;
        }
        return true;
    }
    
    public:
    bool validPalindrome(string s) {
     int i=0;
     int j = s.length()-1;
        
      while(i<=j){
          
          if(s[i]!=s[j]){
              return check(s,i+1,j)||check(s,i,j-1);
          }
          else{
              i++;
              j--;
          }
          
      }  
     return true;   
    }
};