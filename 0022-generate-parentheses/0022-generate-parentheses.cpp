class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        generateParenthesisHelper(result, "", 0, 0, n);
        return result;
    }

private:
    void generateParenthesisHelper(vector<string>& result, string current, int open, int close, int n) {
        if (current.size() == 2 * n) {
            result.push_back(current);
            return;
        }

        if (open < n) {
            generateParenthesisHelper(result, current + '(', open + 1, close, n);
        }
        if (close < open) {
            generateParenthesisHelper(result, current + ')', open, close + 1, n);
        }
    }
};