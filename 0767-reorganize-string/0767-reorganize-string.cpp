class Solution {
public:
    string reorganizeString(string s) {
        
      int hash[26]={0};
        
        for(int i=0;i<s.length();i++){
            hash[s[i]-'a']++;
        }
        
        
        char most;
        int max = INT_MIN;
        
        for(int i=0;i<26;i++){
         if(hash[i]>max){
             max = hash[i];
             most = i+'a';
         }}
            int index =0;
            while(max >0 && s.length()>index){
                s[index] = most;
                max--;
                index +=2;
            }
            
            if(max!=0){
                return "";
            }
            hash[most -'a']=0;
            for(int i=0;i<26;i++){
            
                
                while(hash[i]>0){
                 index = index >=s.length() ? 1: index;
                    s[index]= i+'a';
                    hash[i]--;
                    index +=2;
                    
                }
            }
            
            
            
        return s;
        
        
    }
};