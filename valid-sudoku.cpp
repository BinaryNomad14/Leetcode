class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, map<int, int> > row, col, box;

        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                char num = board[i][j];

                if(num == '.') continue;

                int n = num - '0';
                int boxIn = (i/3) * 3 + (j/3);

                if(row[i][n]++ || col[j][n]++ || box[boxIn][n]++) return false;
            }
        }

        return true;
    }
};