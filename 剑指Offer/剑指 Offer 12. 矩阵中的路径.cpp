class Solution {
private:
    int vis[205][205];


public:
    bool exist(vector<vector<char>>& board, string word) {
        return find( board, word);
    }

    bool find(vector<vector<char>>& board, string word) {
        for (int i = 0; i < board.size(); i++)
        {
            for (int j = 0; j < board[i].size(); j++)
            {
                if (board[i][j] == word[0]) {
                    vis[i][j] = 1;
                    if (dfs(board, word, i, j, 0, board.size(), board[i].size())) return true;
                    vis[i][j] = 0;
                }
            }
        }
        return false;
    }

    bool dfs(vector<vector<char>>& board, string word, int x, int y, int index, int maxRow, int maxCol) {
        int fx[4] = { 0, 0, 1, -1 };
        int fy[4] = { 1, -1, 0, 0 };
        if (index == word.size() - 1) return true;
        for (int i = 0; i < 4; i++)
        {
            int dx = x + fx[i];
            int dy = y + fy[i];
            if (dx >= 0 && dx < maxRow && dy >= 0 && dy < maxCol && !vis[dx][dy] && board[dx][dy] == word[index + 1]) {
                vis[dx][dy] = 1;
                if (dfs(board, word, dx, dy, index + 1, maxRow, maxCol)) return true;
                vis[dx][dy] = 0;
            }
        }
        return false;
    }
};