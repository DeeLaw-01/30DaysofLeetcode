class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> charMap; // Maps characters to their last seen index
        int maxLength = 0;
        int start = 0; // Start of the current substring
        
        for (int end = 0; end < s.length(); ++end) {
            char c = s[end];
            if (charMap.find(c) != charMap.end() && charMap[c] >= start) {
                start = charMap[c] + 1; // Move start to the position after the last occurrence of c
            }
            charMap[c] = end; // Update the last seen index of c
            maxLength = max(maxLength, end - start + 1); // Update max length
        }
        
        return maxLength;
        
        
    }
};