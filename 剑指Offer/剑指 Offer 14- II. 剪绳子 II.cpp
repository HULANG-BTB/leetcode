class Solution {
public:
    int cuttingRope(int n) {
        if (n <= 3) return n - 1;
        long long ans = 1;
        while (n > 4)
        {
            ans *= 3;
            n -= 3;
            ans %= 1000000007;
        }
        ans *= n;
        ans %= 1000000007;
        return ans;
    }
};