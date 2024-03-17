class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int size = nums.size();
        sort(nums.begin(), nums.end());
        for(size_t i =1; i < size; ++i){
            if(nums[i] == nums[i-1]){
                return true;
            }
        }
        return false;
    }
};