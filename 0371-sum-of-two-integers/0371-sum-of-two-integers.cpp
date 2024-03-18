class Solution {
public:
    int getSum(int a, int b) {
        int car =0;
        while (b != 0) {
            car = a & b;
            a = a ^ b;
            b = (unsigned)car << 1;
        }
        return a;
    }
};