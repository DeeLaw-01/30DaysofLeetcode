class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(size_t i = 0; i < nums.size(); i++){
            if(i!=nums[i]){
                return i;
            }
        }
        return nums.size();
    }
};