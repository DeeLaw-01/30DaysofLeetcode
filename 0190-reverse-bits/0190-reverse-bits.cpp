class Solution {
public:
    uint32_t reverseBits(uint32_t nums) {
        string ans = convertToBinary(nums);
        reverse(ans.begin(), ans.end());
        return stringToUint32_t(ans);
    }
    
    string convertToBinary(uint32_t nums) {
        string binary;
        for (int i = 0; i < 32; ++i) {
            binary = to_string(nums % 2) + binary;
            nums /= 2;
        }
        return binary;
    }

    uint32_t stringToUint32_t(string input){
        uint32_t solution =0;
        for(size_t i =0; i<input.size(); ++i){
            solution = solution*2+(input[i]);
        }
        // compensate ASCII deviation by +48
        return solution+=48;
    }
  
};
