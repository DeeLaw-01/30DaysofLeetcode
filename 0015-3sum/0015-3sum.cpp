class Solution {
public:
   std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
      int size = nums.size();
      // Edge Case: Only 3 inputs
      if (size == 3) {
          if ((nums[0] + nums[1] + nums[2]) == 0) {
              return { nums };
          }
          return {};
      }

      // Utilities:
      unordered_map<int, int> map;
      set<vector<int>>solution;
      
      int compliment = 0;

      sort(nums.begin(), nums.end());
      for (int i = 0; i < size; ++i) {
          map[nums[i]] = i;
      }
      for (int I = 0; I < size-1; ++I) {
          if (I > 0 && nums[I] == nums[I - 1]) {
              continue; // Skip duplicates
          }
          for (int II = I + 1; II < size; ++II) {
            if (II > I + 1 && nums[II] == nums[II - 1]) {
    continue;
}
              compliment = -(nums[I] + nums[II]);
              if (map.count(compliment) && map[compliment] != I && map[compliment] != II) {
                  std::vector<int> triplet = { nums[I], nums[II], compliment };
                  std::sort(triplet.begin(), triplet.end());
                  solution.insert(triplet);
              }
          }
      }
      return vector<vector<int>>(solution.begin(), solution.end());
  }

};
