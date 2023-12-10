class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
     vector<vector<int>> vt1;
    int n = nums.size();

    sort(nums.begin(), nums.end());

    for (int i = 0; i < n - 3; i++) {
        for (int j = i + 1; j < n - 2; j++) {
            for (int k = j + 1; k < n - 1; k++) {
                for (int g = k + 1; g < n; g++) {
                    long long sum = static_cast<long long>(nums[i]) + nums[j] + nums[k] + nums[g];
                    if (sum == target) {
                        vector<int> result = {nums[i], nums[j], nums[k], nums[g]};
                        
                        // Check for duplicates before adding
                        if (find(vt1.begin(), vt1.end(), result) == vt1.end()) {
                            vt1.push_back(result);
                        }
                    }
                }
            }

            // Skip duplicates for the second number
            while (j < n - 2 && nums[j] == nums[j + 1]) {
                j++;
            }
        }

        // Skip duplicates for the first number
        while (i < n - 3 && nums[i] == nums[i + 1]) {
            i++;
        }
    }

    return vt1;}
};