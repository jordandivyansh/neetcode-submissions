class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
           vector<unordered_set<int>> rows;
           vector<unordered_set<int>> columns;
           vector<unordered_set<int>> boxes;
           for(int i = 0 ; i < 9; i++){
            for(int j = 0 ; j < 9; j++){
                char ch = board[i][j];
                if(ch == '.')
                    continue;
                if(rows[i].count(ch) || columns[j].count(ch) || boxes.count(ch))
                    return false;
                rows.insert(ch);
                columns.insert(ch);
            }
           }
    }
};
