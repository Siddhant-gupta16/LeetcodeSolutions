class Solution {
public:
   int binary(vector<int>nums,int target,int s,int e){
       
       int mid = s+(e-s)/2;
       
       while(s<=e){
           
           if(nums[mid]==target){
               return mid;
           }
           
           if(nums[mid]>target){
               e =mid-1;
           }
           else{
               s =mid+1;
           }
           mid = s+(e-s)/2;
       }
       
       
       return -1;
       
       
   }
    
    int pivot(vector<int>nums){
        int s=0;
        int e= nums.size()-1;
        int mid = s+(e-s)/2;
        
        while(s<e){
            if(mid+1<nums.size()&&nums[mid]>nums[mid+1]){
              return mid;
             }
              if (mid-1>=0 &&nums[mid-1]>nums[mid]){
                  return mid-1;
              }
            
              if(nums[mid]<=nums[s]){
                  e=mid-1;
              }
              else{
                  s = mid;
              }
            
              mid = s+(e-s)/2;
        }
        
        
        
        
        
        return s;
        
    }
    
    
    
    
    
    
    
    
    int search(vector<int>& nums, int target) {
  
        int index = pivot(nums);
        
        if(nums[0]<=target&&nums[index]>=target){

         int ans = binary(nums,target,0,index);
            return ans;
      }
        
        if(index+1<nums.size()&&nums[index+1]<=target&&nums[nums.size()-1]>=target){
            int ans = binary(nums,target, index+1,nums.size());\
                return ans;
            
        }
               return -1;
        
        
    }
};