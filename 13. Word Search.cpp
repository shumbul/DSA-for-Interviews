// 79. Word Search

class Solution {
    int m, n;
    int dx[4]={0,0,1,-1}, dy[4]={1,-1,0,0};
    bool search_word(int i, int j, int pos, vector<vector<char>> &board, string word){
        if(pos==word.length())
            return true;
        if(i<0 || i>=n || j<0 || j>=m || board[i][j]!=word[pos])
            return false;
        board[i][j]=' '; // emptying to avoid visitied ones
        for(int k=0;k<4;k++){
            int newi=dx[k]+i, newj=dy[k]+j;
            if(search_word(newi, newj, pos+1, board, word))
                return true;
        }
        board[i][j]=word[pos];
        return false;
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        // DFS in matrix
        n=board.size(), m=board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word[0]){
                    if(search_word(i, j, 0, board, word))
                        return true;
                }
            }
        }
        return false;
        // O(n*m*4*l) Time, l is the legth of word; O(l) stack space
    }
};
