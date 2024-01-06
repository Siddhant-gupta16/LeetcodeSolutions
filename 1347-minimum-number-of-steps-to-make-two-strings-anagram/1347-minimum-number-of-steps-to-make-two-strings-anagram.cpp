class Solution {
public:
    int minSteps(string s, string t) {
        int hash[256]={0};
        
        for(int i=0;i<s.length();i++){
             hash[s[i]]++; 
          }
        for(int i=0;i<t.length();i++){
            hash[t[i]]--;
        }
        
          long long  ans=0;
        for(int i=0;i<256;i++){
           if(hash[i]!=0){
               ans = ans + abs(hash[i]);
           }   
        }
        
        return ans/2;
    }
};