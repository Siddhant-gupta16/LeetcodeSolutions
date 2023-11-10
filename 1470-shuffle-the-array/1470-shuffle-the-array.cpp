class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
          int p = nums.size() / 2;
         vector<int> result;

    for (int i = 0; i < p; ++i) {
        result.push_back(nums[i]);
        result.push_back(nums[i + p]);
    }

    return result;
    }
};