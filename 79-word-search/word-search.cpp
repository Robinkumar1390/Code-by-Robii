class Solution {
public:
    bool backtrack(vector<vector<char>>& board, string& word, int r, int c, int ind) {
        if (ind == word.size()) return true;
        if (r < 0 || c < 0 || r >= board.size() || c >= board[0].size() || board[r][c] != word[ind]) 
            return false;

        char temp = board[r][c];
        board[r][c] = '.'; 

        bool res = backtrack(board, word, r + 1, c, ind + 1) ||
                   backtrack(board, word, r - 1, c, ind + 1) ||
                   backtrack(board, word, r, c + 1, ind + 1) ||
                   backtrack(board, word, r, c - 1, ind + 1);

        board[r][c] = temp;
        return res;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int rows = board.size();
        int cols = board[0].size();

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (board[i][j] == word[0] && backtrack(board, word, i, j, 0)) {
                    return true;
                }
            }
        }
        return false;
    }
};
