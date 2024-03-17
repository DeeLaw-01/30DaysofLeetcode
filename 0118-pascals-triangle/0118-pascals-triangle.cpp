class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if (numRows == 1) {
            return {{1}};
        }
        if (numRows == 2) {
            return {{1}, {1, 1}};
        }
        vector<vector<int>> solution (numRows);
        for(size_t i=0; i < numRows; ++i){
            // Set size of each index to i+1 since each row has i+1 columns
            solution[i].resize(i+1);
            // Since first and last element are always 1.. Set them as 1
            solution[i][0] =1;
            solution[i][i]= 1; 

            // Set the columns of current row (i)
            for(size_t ii =1; ii < i; ++ii){
                solution[i][ii] = solution[i-1][ii-1] + solution[i-1][ii];
            }
        }
        return solution;
    }
};