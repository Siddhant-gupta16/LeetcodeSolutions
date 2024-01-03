class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1; 

    for (int i = digits.size() - 1; i >= 0; --i) {
        int current_sum = digits[i] + carry;
        digits[i] = current_sum % 10;
        carry = current_sum / 10;
    }

    if (carry) {
        
        digits.insert(digits.begin(), carry);
    }

    return digits;
    }
};