class Solution {
private:
int f[100+5];

public:
    int fib(int n) {
        if (f[n]) return f[n];
        if (n < 2) return n;
        return f[n] = (fib(n-1) + fib(n-2)) % 1000000007;
    }
};