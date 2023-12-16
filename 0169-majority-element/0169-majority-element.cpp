

class Solution {
public:
    int majorityElement(std::vector<int>& nums) {
        // Initialize the majority element and its count
        int majority_element = nums[0];
        int count = 1;

        // Iterate through the array starting from the second element
        for (int i = 1; i < nums.size(); ++i) {
            // If the count becomes zero, update the majority element
            if (count == 0) {
                majority_element = nums[i];
                count = 1;
            } else {
                // If the current element is equal to the majority element, increment count; otherwise, decrement count
                if (nums[i] == majority_element) {
                    count += 1;
                } else {
                    count -= 1;
                }
            }
        }

        return majority_element;
    }
};
   
    