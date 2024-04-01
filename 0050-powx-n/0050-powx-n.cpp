class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) return 1.0;
        if (n == 1) return x;
        if (n == -1) return 1.0 / x;
        
        double half = myPow(x, n / 2);
        double result = half * half;
        
        // If n is odd, multiply by x one more time
        if (n % 2 != 0) {
            result *= (n > 0) ? x : 1.0 / x;
        }
        
        return result;
    }
};