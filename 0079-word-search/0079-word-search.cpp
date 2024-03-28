class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        rows = board.size();
        cols = board[0].size();
        
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (searchWord(board, word, 0, i, j)) {
                    return true;
                }
            }
        }
        
        return false;
    }
    
private:
    int rows, cols;
    
    bool searchWord(vector<vector<char>>& board, string& word, int index, int i, int j) {
        if (index == word.length()) {
            return true; // Word found
        }
        
        if (i < 0 || i >= rows || j < 0 || j >= cols || board[i][j] != word[index]) {
            return false; // Out of bounds or mismatch
        }
        
        char temp = board[i][j];
        board[i][j] = '*'; // Mark current cell as visited
        
        // Explore neighbors recursively
        bool found = searchWord(board, word, index + 1, i + 1, j) ||
                     searchWord(board, word, index + 1, i - 1, j) ||
                     searchWord(board, word, index + 1, i, j + 1) ||
                     searchWord(board, word, index + 1, i, j - 1);
        
        board[i][j] = temp; // Backtrack
        
        return found;
    }
};