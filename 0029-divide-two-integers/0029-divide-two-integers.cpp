#include <climits>

class Solution {
public:
    int divide(int dividend, int divisor) {
        // Handle overflow cases
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }

        // Determine the sign of the result
        int sign = (dividend < 0) ^ (divisor < 0) ? -1 : 1;

        // Convert both dividend and divisor to positive values
        long long ldividend = llabs(static_cast<long long>(dividend));
        long long ldivisor = llabs(static_cast<long long>(divisor));

        // Initialize quotient
        long long quotient = 0;

        // Perform division using bitwise operations
        while (ldividend >= ldivisor) {
            long long temp = ldivisor, multiple = 1;

            // Use left shift to find the maximum multiple of divisor
            while (ldividend >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }

            // Subtract the maximum multiple from dividend
            ldividend -= temp;
            quotient += multiple;
        }

        // Apply the sign to the result
        return static_cast<int>(sign * quotient);
    }
};

