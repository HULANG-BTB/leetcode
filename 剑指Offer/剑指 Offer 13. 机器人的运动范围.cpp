class Solution {
public:

    int vis[105][105];
    struct _POINT
    {
        int x, y;
    };

    int movingCount(int m, int n, int k) {
        queue<_POINT> q;
        int ans = 0;
        int fx[4] = { 0,0,-1,1 };
        int fy[4] = { -1,1,0,0 };
        vis[0][0] = 1;
        q.push({ 0, 0 });
        while (!q.empty())
        {
            _POINT p = q.front();
            q.pop();
            ans++;
            for (int i = 0; i < 4; i++)
            {
                int dx = p.x + fx[i];
                int dy = p.y + fy[i];
                if (check(dx, dy, m, n, k)) {
                    vis[dx][dy] = 1;
                    q.push({ dx, dy });
                }
                    
            }
        }
        return ans;
    }

    bool check(int x, int y, int m, int n, int k) {
        if (x < 0 || x >= m) return false;
        if (y < 0 || y >= n) return false;
        int sum = 0;
        int t = x;
        while (t > 0)
        {
            sum += t % 10;
            t /= 10;
        }
        t = y;
        while (t > 0)
        {
            sum += t % 10;
            t /= 10;
        }
        return sum <= k && !vis[x][y];
    }

};