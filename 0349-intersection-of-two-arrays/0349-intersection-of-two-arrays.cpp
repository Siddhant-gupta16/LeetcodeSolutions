class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       int n= nums1.size();
        int m =nums2.size();
        set<int>ans;
        
//         int i=0;
//         int j=0;
       
//         int c =min(n,m);
        
//         while(j < c){
            
//             if(nums1[i]==nums2[j]){
//                 ans.insert(nums1[i]);
//                 j++;
//             }
            
//             if(i==n){
//                 i=0;
//             }
            
//             i++;
//         }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                           
                if(nums1[i]==nums2[j]){
                  ans.insert(nums1[i]);         
                }
            
            }
        }
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
       
        vector<int> my(ans.begin(), ans.end());
        return my;
    }
    
};