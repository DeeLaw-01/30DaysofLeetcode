class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int sign = 1;
        long long result = 0;

        // Skip leading whitespace
        while (i < s.size() && s[i] == ' ') {
            i++;
        }

        // Check sign
        if (i < s.size() && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i++] == '-') ? -1 : 1;
        }

        // Convert digits to integer
        while (i < s.size() && isdigit(s[i])) {
            result = result * 10 + (s[i++] - '0');

            // Check for overflow/underflow
            if (result * sign > INT_MAX) return INT_MAX;
            if (result * sign < INT_MIN) return INT_MIN;
        }

        return result * sign;
    }
};