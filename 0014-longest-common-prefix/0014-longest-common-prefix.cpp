class Solution {
public:
string longestCommonPrefix(vector<string> str) {
    sort(str.begin(), str.end());
    string first = str[0];
    string last = str[str.size() - 1];
    string common = "";
    
    for (size_t i = 0; i < min(first.size(), last.size()); i++) {
        if (first[i] != last[i]) {
            break;
        }
        common += first[i];
    }
    return common;
    
}
};