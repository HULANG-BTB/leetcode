class Solution {
public:
    vector<int> printNumbers(int n) {
        vector<int> v;
        int t = 0;
        for (int i = 0; i < n; i++)
        {
            t *= 10;
            t += 9;
        }
        for (int i = 1; i <= t; i++)
        {
            v.push_back(i);
        }
        return v;
    }
};