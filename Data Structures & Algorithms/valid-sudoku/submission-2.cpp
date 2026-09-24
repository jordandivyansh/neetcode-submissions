class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
           vector<unordered_set<int>> rows(9);
           vector<unordered_set<int>> columns(9);
           vector<unordered_set<int>> boxes(9);
           for(int i = 0 ; i < 9; i++){
            for(int j = 0 ; j < 9; j++){
                char ch = board[i][j];
                if(ch == '.')
                    continue;
                int box = (i/3)*3 + j/3;
                if( 
                    rows[i].count(ch) || 
                    columns[j].count(ch) || 
                    boxes[box].count(ch)
                    )
                    return false;
                rows[i].insert(ch);
                columns[j].insert(ch);
                boxes[box].insert(ch);
            }
           }
           return true;
    }
};
