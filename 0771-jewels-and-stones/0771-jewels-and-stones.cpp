class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
//         int i=0;
//         int count =0;
//             int j=0;
//         while(i<jewels.length()){
            
//             if(jewels[i]==stones[j]){
//                 count++;
             
//             }
            
//             if(j==stones.length()){
//                i++;
//                 j=0;
//             }
//               if(j==stones.length()&&jewels[i]==stones[j]){
//                i++;
//                 j=0;
//                   count++;
//             }
            
//             j++;
//         }
        
//         return count;
            int count =0;
        for(int i=0;i<jewels.length();i++){
            for(int j=0;j<stones.length();j++){
                if(jewels[i]==stones[j]){
                    count ++;
                }
            }
        }
        return count ;
        
    }
};