class Solution {
public:
    string replaceSpace(string s) {
        while (true)
        {
            size_t pos = s.find(' ');
            if (pos == s.npos) break;
            s.replace(pos, 1, "%20");
        }
    }
};