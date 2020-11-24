class Solution {
private:
int f[105];

public:
    int numWays(int n) {
        if (f[n]) return f[n];
        if (n < 2) return 1;
        return f[n] = (numWays(n-1) + numWays(n-2)) % 1000000007;
    }
};