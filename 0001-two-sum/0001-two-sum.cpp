class Solution {
public:
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> map;
    int compliment = 0;
    int size = nums.size();
    for (int i = 0; i < size; ++i) {
        compliment = target - nums[i];
        if (map.count(compliment) && map[compliment] != i) {
            return { map[compliment],i };
        }
        map.insert({nums[i],i});
    }
    return { 0 };
}
};