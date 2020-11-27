class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int count = 0;
        if (matrix.size() == 0) return ans;
        int t = 0, l = 0, b = matrix.size(), r = matrix[0].size();
        while (l < r && t < b)
        {
            for (int i = l; i < r; i++)
            {
                ans.push_back(matrix[t][i]);
                count++;
                if (count >= matrix.size() * matrix[0].size()) return ans;;
            }
            for (int i = t+1; i < b; i++)
            {
                ans.push_back(matrix[i][r-1]);
                count++;
                if (count >= matrix.size() * matrix[0].size()) return ans;;
            }
            for (int i = r-2; i >= l; i--)
            {
                ans.push_back(matrix[b-1][i]);
                count++;
                if (count >= matrix.size() * matrix[0].size()) return ans;;
            }
            for (int i = b-2; i >= t+1; i--)
            {
                ans.push_back(matrix[i][l]);
                count++;
                if (count >= matrix.size() * matrix[0].size()) return ans;;
            }
            l++; t++;
            r--; b--;
        }
        return ans;
    }
};