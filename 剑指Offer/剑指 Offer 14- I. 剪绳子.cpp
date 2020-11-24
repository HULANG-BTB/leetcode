class Solution {
    int f[60];
public:
    int cuttingRope(int n) {
        if (n <= 3) return n - 1;
        f[1] = 1;
        f[2] = 2;
        f[3] = 3;
        for (int i = 4; i <= n; i++)
        {
            for (int j = 1; j <= i / 2; j++)
            {
                f[i] = max(f[i], f[j] * f[i-j]);
            }
        }
        return f[n];
    }
};