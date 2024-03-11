class Solution {
public:
    int singleNumber(vector<int>& nums) {
    map <int, int> exists;
    for (const auto& val : nums) {
        if (!exists[val]) {
            exists[val] = 1;
            continue;
        }
        exists[val] += 1;
    }
    for (const auto& val : exists) {
        if (val.second == 1) {
            return val.first;
        }
    }
    return 0;
    }
};