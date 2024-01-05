class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s.length()!=t.length()){
          return false;
        }
        int i=0;
        int j=0;
        while(i<s.length()){
              
             if(s[i]!=t[j]){
               return false;        
             }
             i++;j++;
        }
        
        return true;
        
        
//         int hashmap[256]={0};
        
//         for(int i=0;i<s.length();i++){
//               hashmap[s[i]]++; 
//             int a = (int)s[i];
//             cout<<a<<" ";
//          }
         
//         for(int i=0;i<t.length();i++){
//               hashmap[t[i]]--;    
//          }
        
//         for(int i=0;i<256;i++){
//               if(hashmap[i]!=0){
//                  return false;  
//               }   
//          }
        
        
        
//         return true;
    }
};