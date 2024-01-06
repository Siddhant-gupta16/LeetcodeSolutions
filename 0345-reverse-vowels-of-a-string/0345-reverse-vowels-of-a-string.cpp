class Solution {
public:
    bool vowel(char ch){
    
        ch = tolower(ch);
        
        return ch=='a'||ch=='i'||ch=='e'||ch=='o'||ch=='u';
    
    }
    
    
    string reverseVowels(string s) {
        int i=0;
        int j= s.length()-1;
        while(i<j){

        if(vowel(s[i])&&vowel(s[j])){

        swap(s[i],s[j]);
            i++;
            j--;
        
        }
        
        else if(!vowel(s[i])){
                 i++;
        }
        else{
            j--;
        }
        
        }
        
        return s;
    }
};