

class Solution {
public:
    std::vector<int> runningSum(std::vector<int>& nums) {
        int n = nums.size();
        std::vector<int> runningSumArray(n, 0);

        int sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += nums[i];
            runningSumArray[i] = sum;
        }

        return runningSumArray;
    }
};
