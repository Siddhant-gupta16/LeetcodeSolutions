class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int n = (nums.size());
        
        for(int i=0;i<nums.size();){
            
            if(nums[i]==0){
                nums.erase(nums.begin()+i);
            }
            
            else{i++;}
        }
        
        int g = (n-(nums.size()));
            
            for(int i=0;i<g;i++){
                nums.push_back(0);
            }
    }
};