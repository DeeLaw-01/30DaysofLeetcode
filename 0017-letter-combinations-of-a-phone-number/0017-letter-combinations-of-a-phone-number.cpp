class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        vector<string> result;
        string current;
        letterCombinationsHelper(digits, 0, current, result);
        return result;
    }

private:
    vector<string> mappings = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    void letterCombinationsHelper(const string& digits, int index, string& current, vector<string>& result) {
        if (index == digits.size()) {
            result.push_back(current);
            return;
        }
        for (char c : mappings[digits[index] - '0']) {
            current.push_back(c);
            letterCombinationsHelper(digits, index + 1, current, result);
            current.pop_back();
        }
    }
};