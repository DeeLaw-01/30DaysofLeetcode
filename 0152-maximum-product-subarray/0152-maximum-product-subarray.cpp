class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if (nums.empty()) return 0;
        
        int max_product = nums[0];
        int min_product = nums[0];
        int result = nums[0];
        
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] == 0) {
                max_product = min_product = 0;
            } else {
                int temp_max = max_product;
                max_product = max({nums[i], max_product * nums[i], min_product * nums[i]});
                min_product = min({nums[i], temp_max * nums[i], min_product * nums[i]});
            }
            
            result = max(result, max_product);
        }
        
        return result;
    }
};
