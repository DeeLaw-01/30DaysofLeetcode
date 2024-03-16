class Solution {
public:
    bool isPerfectSquare(int num) {
    size_t i =0;
    for(i =1; i*i < num;i++){
        // Nothing to do here :D
    }
    return (i*i==num);
    }
};