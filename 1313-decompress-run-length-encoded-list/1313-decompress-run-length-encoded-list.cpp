class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
         
       vector<int>result;
       for(int i=0;i<nums.size();i=i+2){
           int freq=nums[i];
           int val = nums[i+1];
           result.insert(result.end(),freq,val);
       } 
       return result;
    }
    int main(){
        vector<int>nums;
        vector<int>result=decompressRLElist(nums);
        for(int num: result){
            cout<<num<<" ";
        }
        cout<<endl;
        return 0;
    }

        
    
};