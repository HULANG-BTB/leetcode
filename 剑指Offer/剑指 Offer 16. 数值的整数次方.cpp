class Solution {
public:
    double myPow(double x, int n) {
        if (x == 0) return 0;
        if (n == 0) return 1;
        if (x == 1) return 1;
        if (n == 1) return x;
        double t = 1.0;
        long s = n; // 当n=int.min时 -n 溢出
        if (s < 0) {
            s = -s;
            x = 1 / x;
        }
        while (s > 0)
        {
            if (s % 2) t *= x;
            x *= x;
            s /= 2;
        }
        return t;
    }
};