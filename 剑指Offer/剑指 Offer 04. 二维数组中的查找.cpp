class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        if (matrix.size() == 0 || matrix[0].size() == 0) return false;
        int flag = 0, row = 0;
        
        for (size_t i = 0; i < matrix.size(); i++)
        {
            if (target >= matrix[i][0] && target <= matrix[i][matrix[i].size() - 1]) {
                for (int j = 0; j < matrix[i].size(); j++)
                {
                    if (matrix[i][j] == target) return true;
                }
            }
        }
        return false;
    }
};