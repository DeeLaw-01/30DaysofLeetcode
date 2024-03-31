class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagramMap;

        for (const string& str : strs) {
            string sortedStr = str;
            sort(sortedStr.begin(), sortedStr.end()); // Sort characters alphabetically
            anagramMap[sortedStr].push_back(str);
        }

        vector<vector<string>> result;
        for (const auto& entry : anagramMap) {
            result.push_back(entry.second);
        }

        return result;
    }
};