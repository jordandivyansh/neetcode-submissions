class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0; i < 9; i++){
            unordered_map<char, int> umap;
            for(int j = 0; j < 9; j++){
                char ch = board[i][j];
                if(ch == '.')
                    continue;
                if(umap[ch]==1)
                    return false;
                umap[ch] = 1;
            }
        }
        for(int i = 0; i < 9; i++){
            unordered_map<char, int> umap;
            for(int j = 0; j < 9; j++){
                char ch = board[j][i];
                if(ch == '.')
                    continue;
                if(umap[ch]==1)
                    return false;
                umap[ch] = 1;
            }
        }
        for(int i = 0; i < 9; i+=3){
            for(int j = 0; j < 9; j+=3){
                unordered_map<char, int> umap;
                for(int k = i; k < i+3; k++){
                    for(int l = j; l < j+3; l++){
                        char ch = board[k][l];
                        if(ch == '.')
                            continue;
                        if(umap[ch]==1)
                            return false;
                        umap[ch] = 1;
                    }
                }
            }
        }
        return true;
    }
};
